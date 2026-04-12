
# 🌱 Smart Irrigation System (IoT Based using Arduino)

An **Automated Irrigation System** using Arduino that monitors soil moisture and automatically controls water supply using a relay-controlled pump.

---

## 🚀 Features

- 🌱 Real-time soil moisture monitoring  
- 💧 Automatic watering system  
- ⚡ Low-cost and energy efficient  
- 🔌 Relay-controlled water pump  
- 📊 Serial monitoring for calibration  

---

## 🛠️ Tech Stack

- Arduino (Uno/Nano)
- Embedded C (Arduino IDE)
- Soil Moisture Sensor
- Relay Module
- Water Pump

---

## 🔌 Hardware Connections

### Soil Moisture Sensor
| Pin | Connection |
|-----|-----------|
| VCC | 5V |
| GND | GND |
| A0  | A0 |

### Relay Module
|Pin| Connection|
|----|----------|
| VCC | 5V |
| GND | GND|
| IN | Pin 7 |
---

## ⚙️ Working Principle

1. Sensor reads soil moisture level  
2. Value compared with threshold  
3. If soil is dry → Pump turns ON  
4. If soil is wet → Pump turns OFF  

---

## 📊 Sample Output
Soil Moisture: 300
Soil is DRY → Pump ON

Soil Moisture: 600
Soil is WET → Pump OFF

---

## 🔧 Calibration

- Dry Soil → ~0–300  
- Wet Soil → ~400–700  

👉 Adjust threshold:
int dryThreshold = 350;

---

## 📂 Project Structure
📁 smart-irrigation-system-using arduino
|-📄 irrigation.ino
┣ 📄 README.md
┗ 📄 circuit-diagram.png (optional)

---

## 🔮 Future Enhancements

- 🌐 IoT Integration (ESP8266 / ESP32)
- 📱 Mobile App Alerts
- ☁️ Cloud Monitoring (Blynk / ThingSpeak)
- 🌡️ Multi-sensor support (temp, humidity)

---

## 📌 Applications

- Smart Farming  
- Home Gardening  
- Water Conservation Systems  

---

## 👨‍💻 Author

**Manya Luthra**  
AIML Student | IoT Enthusiast  

---

## ⭐ Support

If you like this project, give it a ⭐ on GitHub!



