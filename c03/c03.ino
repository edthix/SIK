//RGB led

const int RP = 9;
const int GP = 10;
const int BP = 11;

int DISP_TIME = 100; // how fast we loop the colors in ms

void setup() {
  pinMode(RP, OUTPUT);
  pinMode(GP, OUTPUT);
  pinMode(BP, OUTPUT);
}

void loop() {
  mainColors();
  showSpectrum();
}

void mainColors() {
  // dislays the 8 main colors the RGB led can produce.
  // off all led
  digitalWrite(RP, LOW);
  digitalWrite(GP, LOW);
  digitalWrite(BP, LOW);
  delay(1000);

  //  red
  digitalWrite(RP, HIGH);
  digitalWrite(GP, LOW);
  digitalWrite(BP, LOW);
  delay(1000);

  //  green
  digitalWrite(RP, LOW);
  digitalWrite(GP, HIGH);
  digitalWrite(BP, LOW);
  delay(1000);

  //  blue
  digitalWrite(RP, LOW);
  digitalWrite(GP, LOW);
  digitalWrite(BP, HIGH);
  delay(1000);

  //  yellow
  digitalWrite(RP, HIGH);
  digitalWrite(GP, HIGH);
  digitalWrite(BP, LOW);
  delay(1000);

  //  cyan
  digitalWrite(RP, LOW);
  digitalWrite(GP, HIGH);
  digitalWrite(BP, HIGH);
  delay(1000);

  //  purple
  digitalWrite(RP, HIGH);
  digitalWrite(GP, LOW);
  digitalWrite(BP, HIGH);
  delay(1000);

  //white
  digitalWrite(RP, HIGH);
  digitalWrite(GP, HIGH);
  digitalWrite(BP, HIGH);
  delay(1000);
}

void showRGB(int color) {
  // Translates number 0:767 to color for RGB led..
  //    base numbers are:
  //    0 - pure red
  //    255 - pure green
  //    511 - pure blue
  //    767 - pure red (again)
  //    numbers between above are blends

  //  intensities
  int rI;
  int gI;
  int bI;

  if(color <= 255)
  {
    //    zone 1
    rI = 255 - color; // red on to off
    gI = color; // green off to on
    bI = 0; // blue always off
  } 
  else if (color <= 511) 
  {
    //   zone 2
    rI = 0; // red always off
    gI = 255 - (color - 256); // green on to off
    bI = (color - 256); // blue off to on 
  }
  else
  {
    rI = (color - 512); // red off to on
    gI = 0; // green always off
    bI = 255 - (color - 512); // blue on to off
  }

  analogWrite(RP, rI);
  analogWrite(GP, gI);
  analogWrite(BP, bI);
}

void showSpectrum() {
  int x;
  for(x = 0; x < 768; x++) {
    showRGB(x);
    delay(10);
  } 
}



