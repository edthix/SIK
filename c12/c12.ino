// transistor to move motor
const int mPin = 9;

void setup() {
  pinMode(mPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  //  serialSpeed(); 
  motorAcceleration();
}

void motorAcceleration() {
  // slowly accelerates the motor to full speed
  int s;
  int delayTime = 20; 
  
  for(s = 0; s <= 255; s++) {
    analogWrite(mPin, s);
    delay(delayTime);
  }
  
  for(s = 255; s >= 0; s--) {
    analogWrite(mPin, s);
    delay(delayTime);
  }
}

void serialSpeed() {
  // Use serial monitor window to send a signal to the circuit
  int s;

  Serial.println("Masukkan 0-255 ke dalam kotak di atas");
  Serial.println("Klik send");
  Serial.println();

  while(true) {
    // Check if inc data is available
    while(Serial.available() > 0) {
      s = Serial.parseInt();
      s = constrain(s, 0, 255); // 0 <= s <= 255
      Serial.print("Speed : ");
      Serial.println(s);
      analogWrite(mPin, s);
    }
  }
}





