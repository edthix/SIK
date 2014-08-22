//temperature sensor

const int tempPin = 0;

void setup() {
  //  Use our serial port
  Serial.begin(9600);
}

void loop() {
  float v, celc, fahr;
  v = getVoltage(tempPin);
  celc = (v - 0.5) * 100.0;
  fahr = celc * (9.0/5.0) + 32.0;

  Serial.print("voltage: ");
  Serial.print(v);
  Serial.print("  deg C: ");
  Serial.print(celc);
  Serial.print("  deg F: ");
  Serial.println(fahr);

  delay(1000);
}

float getVoltage(int pin) {
  return (analogRead(pin) * 0.004882814);
}



