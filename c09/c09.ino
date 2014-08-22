//flex sensor
#include <Servo.h>

Servo s1;

const int fPin = 0; // flex sensor pins

void setup() {
  Serial.begin(9600); 
  s1.attach(9);
}

void loop() {
  int fPos;
  int sPos;

  fPos = analogRead(fPin); // read the position of the flex sensor 0 - 1023
  sPos = map(fPos, 600, 900, 0, 180);
  sPos = constrain(sPos, 0, 180);

  s1.write(sPos);

  Serial.print("sensor: ");
  Serial.print(fPos);
  Serial.print("  servo: ");
  Serial.println(sPos);

  delay(20);
}




