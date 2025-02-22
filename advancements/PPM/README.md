# PPM Receiver Interface Advancement

## Introduction & Use Case
Integrating a **PPM receiver** allows the drone to be controlled using **FlySky or other standard 2.4GHz RC transmitters**. This upgrade provides precise control and eliminates the need for mobile-based connectivity.

## Required Components
- **PPM-Compatible Receiver (FlySky, FrSky, etc.)**
- **ATmega328P Microcontroller**
- **Connecting Wires**
- **Power Supply (Li-Po Battery 3.7V)**

## Implementation Steps
### Step 1: Removing the Existing NRF24L01 Module
- Carefully **desolder the NRF24L01 module** from the drone PCB.
- Ensure that the designated slot for the **PPM receiver** is clean and free of residual solder.

### Step 2: Connecting the PPM Receiver
- Align the **PPM signal wire** to the correct **PPM input pin** on the ATmega328P.
- **Solder the power and ground wires** securely to the PCB.

### Step 3: Making Necessary Connections
- Follow the **connection steps** below to link the PPM receiver to the ATmega328P.

## Connection Diagram
### Connection Steps:
1. **Connect VCC of PPM Receiver** to **5V on ATmega328P**.
2. **Connect GND of PPM Receiver** to **GND on ATmega328P**.
3. **Connect PPM Signal Output** to **PPM input pin on ATmega328P**.
4. **Ensure correct signal handling** in the firmware before uploading.

[Refer to the connection diagram here](connection_diagram.png)

## Code
[Download the implementation code here](code.ino)

## Testing & Troubleshooting Guide
### Testing Steps:
1. **Bind the PPM receiver** with the transmitter.
2. **Upload the provided code** to the ATmega328P.
3. **Ensure correct signal reception** by monitoring serial output.
4. **Control the drone using the RC transmitter** and verify response.

### Troubleshooting:
- **No signal detected?**
  - Ensure the receiver is **properly bound** to the transmitter.
  - Check the **PPM pin assignment** in the firmware.
- **Delayed or erratic response?**
  - Verify **firmware signal processing** and reduce latency.
  - Ensure proper **PPM signal timing**.

This advancement enhances **control precision** and enables **seamless integration** with standard RC transmitters!

