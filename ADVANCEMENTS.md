# Advancements & Modifications

The **3-in-1 Drone** is designed not only for fun but also as a **learning platform** where users can experiment with various enhancements. This section provides detailed insights into possible advancements, guiding users on how to upgrade and modify their drone for a more engaging experience.

## 1️⃣ PCB Design & Hardware Details
*(Schematics & PCB layout placeholders will be added here.)*

- **Expansion Options:** The PCB includes extra **GPIO pins**, allowing users to integrate additional components such as **GPS modules, temperature sensors, IR sensors, and more**.
- **Power Management:** The circuit is designed for **efficient power distribution**, ensuring stable operation across all three modes.
- **Motor Control System:** The **SI2302 MOSFET-based** motor drivers regulate speed and thrust effectively.

## 2️⃣ Components List
| Component | Specification | Purpose |
|-----------|---------------|---------|
| ATmega328P | 8-bit MCU | Main processing unit |
| MPU6050 | 6-axis IMU | Stability and motion tracking |
| VL53L0X | Laser ToF Sensor | Obstacle avoidance |
| NRF24 | RF Module | Remote control communication |
| SI2302 MOSFET | Power MOSFET | Motor speed control |
| Coreless Motors | 48,000 RPM | Drone propulsion |
| Li-Po Battery | 3.7V | Power supply |

## 3️⃣ Possible Advancements
Each advancement is detailed in the [Advancements Folder](./advancements/), containing:
- **Introduction & Use Case**
- **Required Components**
- **Connection Diagrams & Schematics**
- **Implementation Code**
- **Testing & Troubleshooting Guide**

| Advancement | Description | Folder |
|-------------|-------------|---------|
| Bluetooth Control | Replace NRF24 with HC-05 for Bluetooth connectivity | [Bluetooth](./advancements/Bluetooth) |
| Wi-Fi Upgrade | Use ESP32 for wireless control | [WiFi](./advancements/WiFi) |
| PPM Receiver | Use standard 2.4Ghz PPM remotes like Flyski or RadioLink | [PPM](./advancements/PPM) |
| Camera Module | Add FPV streaming capabilities | [Camera](./advancements/Camera) |
| Automated Mode Switching | Software-based transitions between modes | [ModeSwitch](./advancements/ModeSwitch) |
| Gesture Control | Implement MPU6050-based gesture recognition | [Gesture](./advancements/Gesture) |

[Refer to this playlist to see Advancement Tutorial Videos](https://www.youtube.com/playlist?list=PLTJ5CnqshtICjiJ5V5KsPY_q3sDnV09eV)

## 4️⃣ Troubleshooting Guide
**Common Issues & Fixes**

- **Motors not spinning?** Check the battery and motor connections.
- **Unstable flight?** Ensure the MPU6050 is properly calibrated.
- **Remote not responding?** Verify NRF24 modules are correctly paired.

*(For in-depth troubleshooting, visit the relevant advancement folder.)*

## 5️⃣ Contribution Guidelines
Want to enhance the 3-in-1 Drone further? Check the **[Contribution Guidelines](CONTRIBUTING.md)** for how to contribute.

## 6️⃣ License
This project is open-source under the **[MIT License](LICENSE)**.


