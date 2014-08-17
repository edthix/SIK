/* Potentiometer */
int sensorPin = 0; // pot connected to A0
int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT); 
}

void loop() {
  int sensorValue; // value of pot
  sensorValue = analogRead(sensorPin);

  digitalWrite(ledPin, HIGH);
  delay(sensorValue); // pause for sensorValue ms
  digitalWrite(ledPin, LOW);
  delay(sensorValue);
}



