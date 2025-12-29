# 🎮 ESP32 Joystick Controlled Robot (Dual ESP32)

🔧 Developed using **Dual ESP32 (Transmitter & Receiver)**  
🎮 Real-time robot control using **Joystick Module** and **Wireless Communication**

---

## 📌 Project Overview

This project demonstrates a **wireless joystick-controlled robot** using
**two ESP32 boards** — one as a **transmitter (Tx)** and one as a
**receiver (Rx)**.

The joystick’s **X–Y axis values** are transmitted wirelessly to control
robot direction and speed in real time.

🎯 Focus Areas:
- Wireless embedded communication
- Real-time control systems
- PWM-based motor speed control

📹 A working demo video is included in this repository.

---

## 🎯 Key Features

✨ Dual ESP32 architecture (Tx/Rx)  
🎮 Joystick-based directional control  
📡 Low-latency wireless communication  
⚙️ PWM-based motor speed control  
🔁 Smooth and responsive robot movement  
📹 Real hardware demo available  

---

## 🧰 Technologies Used

- ESP32 (Transmitter & Receiver)
- Joystick Module
- PWM Motor Control
- Wireless Communication (ESP-NOW / Wi-Fi based)
- Embedded C / Arduino Framework
- Git & GitHub

---

## 📁 Repository Structure

ESP32-Joystick-Controlled-Robot/
├── src/
│ ├── transmitter/
│ │ └── esp32_joystick_tx.ino
│ └── receiver/
│ └── esp32_robot_rx.ino
├── docs/
│ └── README.md
└── demo/
└── working_video.mp4


---

## 🔧 System Architecture

### 🔹 Transmitter (ESP32 – Tx)
- Reads joystick X–Y axis values
- Sends control data wirelessly to receiver

### 🔹 Receiver (ESP32 – Rx)
- Receives joystick data
- Controls motor direction and speed using PWM

---

## 🚀 How It Works

1. Joystick movement generates analog X–Y values
2. Transmitter ESP32 sends data wirelessly
3. Receiver ESP32 processes data
4. PWM signals control motor speed and direction
5. Robot responds in real time

---

## 📈 Demo

🎥 Working demo video available in: https://github.com/krishisharma301/ESP32-Joystick-Controlled-Robot/blob/main/demo/working_video.mp4


---

## 🙋‍♂️ Developer

👤 **Krushna Sharma**  
🎓 Robotics & Automation Engineering Student  
🔗 GitHub: https://github.com/krishisharma301  
🔗 LinkedIn: https://linkedin.com/in/krushna-sharma-612575324

---

## 🏷️ Tags

`#esp32` `#joystick-robot` `#wireless-robot`  
`#embedded-systems` `#pwm-control` `#robotics`
