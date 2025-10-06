# Bluetooth Control Advancement

## Introduction & Use Case
Use a camera module like the OV7670 with FIFO or ArduCAM lets the ATmega328P capture images despite its limited memory. The camera stores data in its buffer, and the ATmega reads it slowly over SPI/I²C to save on an SD card or send via serial, enabling simple photo capture projects.
## Required Components
- *OV7670 with FIFO or ArduCAM Mini (recommended)*
- *ATmega328P Microcontroller*
- *Level Shifter (if required for voltage compatibility)*
- *Connecting Wires*
- *Power Supply (Li-Po Battery 3.7V)*
- *MicroSD card*
- *SD card module*

## Implementation Steps
### Step 1: Removing the Existing NRF24L01 Module
- Carefully *desolder the NRF24L01 module* from the drone PCB.
- Ensure that the designated slot for the HC-05 is *clean and free of residual solder*.

### Step 2: Placing the HC-05 Module
- Align the *HC-05 module* with the dedicated slot on the PCB.
- *Solder the HC-05* securely, ensuring strong electrical connections.

### Step 3: Making Necessary Connections
- Follow the *connection steps* below to link the HC-05 module to the ATmega328P.

## Connection Diagram
### Connection Steps:
1. *Connect VCC of HC-05* to *5V (or 3.3V if required)* on ATmega328P.
2. *Connect GND of HC-05* to *GND of ATmega328P*.
3. *Connect TX of HC-05* to *RX of ATmega328P (via level shifter if needed)*.
4. *Connect RX of HC-05* to *TX of ATmega328P (via level shifter if needed)*.
5. *Ensure correct baud rate settings* in the code before uploading.

[Refer to the connection diagram here](connection_diagram_BT.png)

## Code
[Download the implementation code here](code_BT.ino)

## Testing & Troubleshooting Guide
### Testing Steps:
1. *Pair the Bluetooth module* with your mobile device.
2. *Upload the provided code* to the ATmega328P.
3. *Check serial communication* using a terminal app.
4. *Send movement commands* and ensure the drone responds accordingly.

### Troubleshooting:
- *Bluetooth module not pairing?*
  - Ensure it's in *pairing mode* (LED should blink rapidly).
  - Check for correct *RX/TX connections*.
- *Drone not responding to commands?*
  - Verify *AT commands* and baud rate settings.
  - Ensure proper *power supply* to the module.
- *Lag in response?*
  - Reduce *communication latency* by optimizing code delays.

This advancement enhances control versatility, making the drone *smartphone-compatible* and future-ready!
