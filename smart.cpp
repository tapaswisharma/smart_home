#include <Servo.h>

Servo windowServo; // Create a servo object

const int irPin = 2;         
const int tempPin = A0;       // Temperature sensor pin
const int moisturePin = 3;    // Moisture sensor pin
const int ledPin = 10;        // LED pin
int tempThreshold = 100;       // Temperature threshold in Celsius
int irState = LOW;           // Variable to store IR state
bool windowLocked = false;    // Flag to lock window during rain

void setup() {
  windowServo.attach(9);       // Attach the servo to pin 9
  pinMode(ledPin, OUTPUT);     // Set LED pin as output
  pinMode(irPin, INPUT);      // Set IR pin as input
  pinMode(moisturePin, INPUT); // Set moisture pin as input
  Serial.begin(9600);          // Start serial communication
}

void loop() {
  // IR sensor check
  irState = digitalRead(irPin);
  if (irState == HIGH) { 
    digitalWrite(ledPin, HIGH); 
    Serial.println("Motion detected! Light ON");
  } else {
    digitalWrite(ledPin, LOW);
    Serial.println("No motion. Light OFF");
  }

  // Temperature reading
  int sensorValue = analogRead(tempPin);
  float voltage = sensorValue * (5.0 / 1023.0);
  float temperature = voltage * 100;

  // Moisture sensor check and window lock
  int moistureState = digitalRead(moisturePin);
  if (moistureState == HIGH) { 
    windowServo.write(0); 
    windowLocked = true;  
    Serial.println("Window LOCKED due to rain");
  } else if (moistureState == LOW && windowLocked) {
    windowLocked = false;
  }

  // Temperature-based window control (only if window is not locked)
  if (!windowLocked) {
    if (temperature < tempThreshold) {
      windowServo.write(0); // Open window when temperature is low
      Serial.println("Window closed due to low temperature");
    } else {
      windowServo.write(90);  // Close window when temperature is high
      Serial.println("Window open due to high temperature");
    }
  } else {
    Serial.println("Window is locked, no temperature-based control.");
  }

  delay(1000); // Wait for 1 second before next loop iteration
}
