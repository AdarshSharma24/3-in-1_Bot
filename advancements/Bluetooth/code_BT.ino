#include <SoftwareSerial.h>

// Create Bluetooth serial connection
SoftwareSerial BTSerial(10, 11);  // RX, TX

// Joystick pins
const int joyX = A0;
const int joyY = A1;

// Variables to store values
int xValue = 0;
int yValue = 0;

void setup() {
  Serial.begin(9600);     // For debugging
  BTSerial.begin(9600);   // Bluetooth baud rate (HC-05 default)

  Serial.println("HC-05 Joystick Transmitter");
  Serial.println("Sending joystick values (X,Y)...");
}

void loop() {
  // Read joystick values
  xValue = analogRead(joyX);
  yValue = analogRead(joyY);

  // Map values to -100 ~ +100 range (optional, for easier control)
  int mappedX = map(xValue, 0, 1023, -100, 100);
  int mappedY = map(yValue, 0, 1023, -100, 100);

  // Send as formatted data over Bluetooth
  BTSerial.print("X:");
  BTSerial.print(mappedX);
  BTSerial.print(" Y:");
  BTSerial.println(mappedY);

  // Print to Serial Monitor (for debugging)
  Serial.print("X:");
  Serial.print(mappedX);
  Serial.print("  Y:");
  Serial.println(mappedY);

  delay(100);  // Adjust refresh rate (100ms = 10 samples/sec)
}
