#  Camera Installation Advancement

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
### Step 1: Preparing the Arduino Board
- Keep all the existing connection of the modules (e.g., NRF24L01 or HC-05) connected.
- Ensure there’s enough space for connecting the ArduCAM Mini module alongside it.

### Step 2: Placing the ArduCAM Mini Module
- Align the ArduCAM Mini module near the Arduino or PCB.
- Ensure correct orientation of pins and a clear path for wiring.

### Step 3: Making Necessary Connections
- Follow the connection steps below to link the ArduCAM Mini to the ATmega328P while keeping the existing module active.
## Connection Diagram
### Connection Steps:
1. *Connect VCC of ArduCAM Mini* to *3.3V on the ATmega328P*.
2. *Connect GND of ArduCAM Mini* to *GND of ATmega328P*.
3. *Connect MOSI of ArduCAM Mini* to *D11 on the ATmega328P* (shared with existing module).
4. *Connect MISO of ArduCAM Mini* to *D12 on the ATmega328P* (shared with existing module).
5. *Connect SCK of ArduCAM Mini* to *D13 on the ATmega328P* (shared with existing module).
6. *Connect CS of ArduCAM Mini* to *D10 on the ATmega328P* (ensure no conflict with other devices).
7. *Connect SDA of ArduCAM Mini* to *A4* and *SCL* to *A5 on the ATmega328P*.
8. *Connect the SD card module*: *MOSI → D11*, *MISO → D12*, *SCK → D13* (shared), *CS → D9* (different from camera CS).
9. Ensure all grounds (GND) are common and verify there are no chip-select pin conflicts.

[Refer to the connection diagram here](connection_diagram_camera.png)

## Code
[Download the implementation code here](code_camera.ino)

## Testing & Troubleshooting Guide
### Testing Steps:
1. Insert the microSD card into the SD card module..
2. Upload the provided ArduCAM Mini code to the ATmega328P.
3. Open Serial Monitor in the Arduino IDE and check debug messages.
4. Trigger the camera capture and check if the image is saved to the microSD card.
5. Remove the microSD card and view the saved image on a computer.

### Troubleshooting:
- *Camera not capturing images?*
  - Ensure the CS pin connections are correct and not conflicting with other devices.
  - Check the camera module orientation and wiring.
  - Ensure proper 3.3V power supply to the module.
- *No image saved to microSD card?*
  - Verify the SD card is formatted FAT32.
  - Check SD card module wiring and CS pin.
  - Test the SD card module separately with a simple example sketch.
- *Serial Monitor shows error messages?*
  - Ensure the ArduCAM and SD libraries are installed correctly.
  - Confirm the correct CS pins are set in the code.
    
This advancement enhances visual capability, making the system image-capture-enabled and ready for advanced vision-based projects!
