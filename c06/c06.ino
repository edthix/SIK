//photo resistor
const int sPin = 0;
const int lPin = 9;

int lLvl, high = 0, low = 1023;

void setup() {
  pinMode(lPin, OUTPUT);
}

void loop() {
  lLvl = analogRead(sPin);
  //  manualTune();
  autoTune();
  analogWrite(lPin, lLvl);
}

void manualTune() {
  lLvl = map(lLvl, 0, 1023,0, 255);
  lLvl = constrain(lLvl, 0, 255);
}

void autoTune() {
  if(lLvl < low) {
    low = lLvl; 
  }

  if(lLvl > high) {
    high = lLvl; 
  }

  lLvl = map(lLvl, low+30, high-30, 0, 255);
  lLvl = constrain(lLvl, 0, 255);
}








