// Buzzer
// Music note
// note 	frequency
//  c     262 Hz
//  d     294 Hz
//  e     330 Hz
//  f     349 Hz
//  g     392 Hz
//  a     440 Hz
//  b     494 Hz
//  C     523 Hz

const int bPin = 9;
const int sLen = 18;
char notes[] = "fff fff ff"; // space represents a rest

// Beats is an array of values for each note and rest.
// A "1" represents a quarter-note, 2 a half-note, etc.
// Don't forget that the rests (spaces) need a length as well.
int beats[] = {
  1,1,1,1,1,1,4,4,2,1,1,1,1,1,1,4,4,2}; 
int tempo = 150;

void setup() {
  pinMode(bPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  //  int i, duration;
  //
  //  for(i = 0; i < sLen; i++) {
  //
  //    duration = beats[i] * tempo; 
  //
  //    Serial.print("Duration : ");
  //    Serial.print(duration);
  //    Serial.println("");
  //
  //    if(notes[i] == ' ')
  //    {
  //      delay(duration);
  //    } 
  //    else
  //    {
  //      tone(bPin, frequency(notes[i]), duration);
  //      delay(duration);
  //    }
  //
  //    delay(tempo/10);
  //  } 
  tone(bPin, 0, 10);
}

int frequency(char note) 
{
  int i;
  const int nNotes = 8;

  char codes[] = { 
    'c', 'd', 'e', 'f', 'g', 'a', 'b', 'C'                           
  };

  int frequencies[] = {
    262, 294, 330, 349, 392, 440, 494, 523                            
  };

  for(i = 0; i < nNotes; i++) {
    if(codes[i] == note)
    {
      return(frequencies[i]);
    } 
  }

  return(0);
}







