# 🔊 ESP32 Bluetooth Speaker (MAX98357A I2S Amplifier)

![Project Image](speaker-images/speaker.jfif)

---

## 📌 Project Overview

This project turns an **ESP32** into a fully functional **Bluetooth audio speaker** using the **MAX98357A I2S Digital Amplifier**.

Audio is streamed wirelessly from a smartphone (via Bluetooth A2DP) and sent digitally over I2S to the amplifier, which drives a speaker directly.

No external DAC required. Clean digital audio path. Minimal hardware. Maximum efficiency.

---

## 🚀 Features

- 📶 Bluetooth A2DP Audio Streaming
- 🔊 Digital I2S Audio Output
- 🎵 High-quality Class-D amplification
- ⚡ Simple wiring
- 🔄 Automatic background audio handling
- 📱 Custom Bluetooth device name

---

## 🛠 Hardware Requirements

- ESP32 Dev Module
- MAX98357A I2S Amplifier Module
- 4Ω or 8Ω Speaker
- Jumper wires
- 5V Power Supply (recommended for louder output)

---

## 🔌 Pin Configuration (From Code)

## 🔧 Wiring Connections

| MAX98357A Pin | Connect To ESP32 | Notes |
|---------------|------------------|-------|
| VIN           | 5V               | Recommended for louder output |
| GND           | GND              | Must share common ground |
| BCLK          | GPIO 26          | I2S Bit Clock |
| LRC / WS      | GPIO 25          | I2S Word Select |
| DIN           | GPIO 22          | I2S Data Input |
| SD            | 3.3V             | Keeps amplifier enabled (or leave floating if auto-enabled) |
| SPK+          | Speaker +        | Connect directly to speaker |
| SPK-          | Speaker -        | Do NOT connect to ground |

---

## 👨‍💻 Author

**Swarnendu**  
Founder — **itz-void-tech**

🚀 Embedded Systems | Robotics | IoT | ESP32 Development  
Building next-gen hardware projects with real-world impact.
