const int ledPin = 13; // LED connected to digital pin 13

void setup() {
  pinMode(ledPin, OUTPUT);   // Set pin 13 as output
  Serial.begin(9600);        // Start Serial communication
}

void loop() {
  if (Serial.available()) {
    String command = Serial.readStringUntil('\n'); // Read input until newline
    command.trim(); // Remove leading/trailing spaces

    if (command == "1") {
      digitalWrite(ledPin, HIGH);  // Turn ON LED
      Serial.println("Light turned ON");
    } 
    else if (command == "0") {
      digitalWrite(ledPin, LOW);   // Turn OFF LED
      Serial.println("Light turned OFF");
    } 
    else {
      Serial.println("Unknown command");
    }
  }
}
