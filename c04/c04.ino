//multiple leds

int lPins[] = {
  2,3,4,5,6,7,8,9};

void setup() {
  int i;

  for(i =0; i <= 7; i++) {
    pinMode(lPins[i], OUTPUT); 
  }
}

void loop() {
  //  oneAfterAnotherNoLoop();
  //  delay(3000);
  oneAfterAnotherLoop();
}

void oneAfterAnotherNoLoop() {
  //    one led after another without any loops
  int delayTime = 100; // in ms

  //  turn all on
  digitalWrite(lPins[0], HIGH);
  delay(delayTime);
  digitalWrite(lPins[1], HIGH);
  delay(delayTime);
  digitalWrite(lPins[2], HIGH);
  delay(delayTime);
  digitalWrite(lPins[3], HIGH);
  delay(delayTime);
  digitalWrite(lPins[4], HIGH);
  delay(delayTime);
  digitalWrite(lPins[5], HIGH);
  delay(delayTime);
  digitalWrite(lPins[6], HIGH);
  delay(delayTime);
  digitalWrite(lPins[7], HIGH);
  delay(delayTime);  

  //  turn all off
  digitalWrite(lPins[7], LOW);
  delay(delayTime);
  digitalWrite(lPins[6], LOW);
  delay(delayTime);
  digitalWrite(lPins[5], LOW);
  delay(delayTime);
  digitalWrite(lPins[4], LOW);
  delay(delayTime);
  digitalWrite(lPins[3], LOW);
  delay(delayTime);
  digitalWrite(lPins[2], LOW);
  delay(delayTime);
  digitalWrite(lPins[1], LOW);
  delay(delayTime);
  digitalWrite(lPins[0], LOW);
  delay(delayTime);
}

void oneAfterAnotherLoop() {
  int i;
  int dt = 100; 

  for(i = 0; i <= 7; i++) {
    digitalWrite(lPins[i], HIGH);
    delay(dt); 
  }

  for(i = 7; i >= 0; i--) {
    digitalWrite(lPins[i], LOW);
    delay(dt); 
  }
}








