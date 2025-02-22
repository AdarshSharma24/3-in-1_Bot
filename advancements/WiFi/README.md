# Wi-Fi Control Advancement

## Introduction & Use Case
Replacing the NRF24 module with an **ESP32 Wi-Fi module** enables wireless control using a smartphone or web interface. This upgrade provides extended range and the ability to control the drone over a local network or even the internet, making it more versatile and user-friendly.

## Required Components
- **ESP32 Module**
- **ATmega328P Microcontroller**
- **Level Shifter (if required for voltage compatibility)**
- **Connecting Wires**
- **Power Supply (Li-Po Battery 3.7V)**

## Implementation Steps
### Step 1: Removing the Existing NRF24L01 Module
- Carefully **desolder the NRF24L01 module** from the drone PCB.
- Ensure that the designated slot for the ESP32 is **clean and free of residual solder**.

### Step 2: Placing the ESP32 Module
- Align the **ESP32 module** with the dedicated slot on the PCB.
- **Solder the ESP32** securely, ensuring strong electrical connections.

### Step 3: Making Necessary Connections
- Follow the **connection steps** below to link the ESP32 module to the ATmega328P.

## Connection Diagram
### Connection Steps:
1. **Connect VCC of ESP32** to **3.3V on ATmega328P**.
2. **Connect GND of ESP32** to **GND of ATmega328P**.
3. **Connect TX of ESP32** to **RX of ATmega328P (via level shifter if needed)**.
4. **Connect RX of ESP32** to **TX of ATmega328P (via level shifter if needed)**.
5. **Ensure proper baud rate settings** in the code before uploading.

[Refer to the connection diagram here](connection_diagram.png)

## Code
[Download the implementation code here](code.ino)

## Testing & Troubleshooting Guide
### Testing Steps:
1. **Connect the ESP32 module** to a Wi-Fi network.
2. **Upload the provided code** to the ATmega328P.
3. **Use a web interface or mobile app** to send control commands.
4. **Ensure the drone responds correctly to commands.**

### Troubleshooting:
- **ESP32 not connecting to Wi-Fi?**
  - Verify the **Wi-Fi SSID and password** in the code.
  - Ensure the **ESP32 is receiving adequate power**.
- **Drone not responding to commands?**
  - Check for **proper serial communication settings**.
  - Ensure **correct RX/TX wiring** between ESP32 and ATmega328P.
- **High latency or lag?**
  - Optimize **network communication delays** in the code.

This advancement enhances remote control capabilities, making the drone **Wi-Fi-compatible** and allowing for extended range operations!

