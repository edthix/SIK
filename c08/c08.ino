//single servo
#include <Servo.h>  // servo library
Servo s1; // Servo object

void setup() {
  s1.attach(9); // attach
}

void loop() {
  int p;

  s1.write(90); // servo to 90 degrees
  delay(1000);
  s1.write(180); // servo to 180 degrees
  delay(1000);
  //  s1.write(0); // servo to 0 degrees
  //  delay(1000);

  //  for(p = 0; p < 180; p += 2) {
  //    s1.write(p);
  //    delay(20); 
  //  }
  //
  //  for(p = 180; p >= 0; p -= 1) {
  //    s1.write(p);
  //    delay(20); 
  //  }
}






