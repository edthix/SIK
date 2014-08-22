//Push buttons

const int b1p = 2; 
const int b2p = 3;
const int lp = 13;

void setup() {
  pinMode(b1p, INPUT);
  pinMode(b2p, INPUT);
  pinMode(lp, OUTPUT);
}

void loop() {
  int b1state, b2state;

  b1state = digitalRead(b1p);
  b2state = digitalRead(b2p);

  if (((b1state == LOW) || (b2state == LOW))  // if we're pushing button 1 OR button 2
  && !                                               // AND we're NOT
  ((b1state == LOW) && (b2state == LOW))) // pushing button 1 AND button 2
    // then...
  {
    digitalWrite(lp, HIGH);  // turn the LED on
  }
  else
  {
    digitalWrite(lp, LOW);  // turn the LED off
  }
}
