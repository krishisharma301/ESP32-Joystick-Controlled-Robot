// ESP32 Joystick Transmitter
// Sends X-Y joystick values wirelessly using ESP-NOW

#include <WiFi.h>
#include <esp_now.h>

typedef struct {
  int x;
  int y;
} joystickData;

joystickData data;

// 🔁 CHANGE THIS to RECEIVER ESP32 MAC address
uint8_t receiverMAC[] = {0x24, 0x6F, 0x28, 0xAA, 0xBB, 0xCC};

void setup() {
  Serial.begin(115200);

  WiFi.mode(WIFI_STA);

  if (esp_now_init() != ESP_OK) {
    Serial.println("ESP-NOW Init Failed");
    return;
  }

  esp_now_peer_info_t peerInfo = {};
  memcpy(peerInfo.peer_addr, receiverMAC, 6);
  peerInfo.channel = 0;
  peerInfo.encrypt = false;

  esp_now_add_peer(&peerInfo);
}

void loop() {
  data.x = analogRead(34);   // Joystick X
  data.y = analogRead(35);   // Joystick Y

  esp_now_send(receiverMAC, (uint8_t *)&data, sizeof(data));

  delay(50);
}
