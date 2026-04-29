#include <SoftwareSerial.h>

// GSM pins (kept minimal)
#define rxPin 12
#define txPin 13
SoftwareSerial sim800(rxPin, txPin);

// Relay + Sensor
#define RELAY_1 7
#define PHASE_PIN A0

bool relayState = false;
bool phaseFault = false;
unsigned long faultStartTime = 0;

void setup() {
  Serial.begin(9600);
  sim800.begin(9600);

  pinMode(RELAY_1, OUTPUT);
  digitalWrite(RELAY_1, LOW);

  Serial.println("System Initialized");
}

// ---------------- MAIN LOOP ----------------
void loop() {
  float voltage = analogRead(PHASE_PIN) * (5.0 / 1023.0);

  // Detect fault condition (example threshold)
  if (voltage >= 2.0) {
    if (!phaseFault) {
      phaseFault = true;
      faultStartTime = millis();
      Serial.println("Phase Fault Detected");
    }

    // Turn OFF motor if running
    if (relayState) {
      delay(5000); // confirm fault
      if (analogRead(PHASE_PIN) * (5.0 / 1023.0) >= 2.0) {
        digitalWrite(RELAY_1, LOW);
        relayState = false;
        sendAlert("Motor OFF - Fault Detected");
      }
    }
  }
  else {
    // Restore after stable condition
    if (phaseFault && millis() - faultStartTime > 10000) {
      phaseFault = false;

      digitalWrite(RELAY_1, HIGH);
      relayState = true;

      sendAlert("Motor ON - Line Normal");
    }
  }
}

// ---------------- BASIC ALERT FUNCTION ----------------
void sendAlert(String message) {
  Serial.println(message);

  // GSM logic intentionally simplified for public repo
  // Full implementation available on request
}
