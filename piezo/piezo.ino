#include "pitches.h"

int swSequence[] = {
    NOTE_G1, NOTE_D1, NOTE_C1, NOTE_B1, NOTE_A1, NOTE_D1, NOTE_C1, NOTE_B1, NOTE_A1, NOTE_D1,
    NOTE_C1, NOTE_B1, NOTE_C1, NOTE_A1, NOTE_D1, NOTE_D1, NOTE_G1, NOTE_D1,
    NOTE_C1, NOTE_B1, NOTE_A1, NOTE_D1, NOTE_C1, NOTE_B1, NOTE_A1, NOTE_D1, NOTE_C1, NOTE_B1, NOTE_C1, NOTE_A1, NOTE_D1, NOTE_D1, NOTE_E1,
    NOTE_E1, NOTE_E1, NOTE_C1, NOTE_B1, NOTE_A1, NOTE_G1, NOTE_G1, NOTE_A1, NOTE_B1, NOTE_A1, NOTE_E1, NOTE_FS1, NOTE_D1, NOTE_D1, NOTE_E1,
    NOTE_E1, NOTE_C1, NOTE_B1, NOTE_A1, NOTE_G1, NOTE_D1, NOTE_A1, NOTE_D1, NOTE_D1
    };

int postovsky[] = {
  NOTE_E4, NOTE_G4, NOTE_C4, NOTE_E4, NOTE_G4, NOTE_G3, NOTE_G3, NOTE_C4, NOTE_E4, NOTE_G4,
  NOTE_E4, NOTE_G4, NOTE_C4, NOTE_E4, NOTE_G4, NOTE_G3, NOTE_G3, NOTE_C4,
  NOTE_G4, NOTE_G3, NOTE_G3, NOTE_C4, NOTE_E4, NOTE_G4, NOTE_G4, NOTE_G3, NOTE_G3, NOTE_C4, NOTE_E4, NOTE_G4,
  NOTE_E4, NOTE_G4, NOTE_C4, NOTE_E4, NOTE_G4, NOTE_G3, NOTE_G3, NOTE_C4
};

int postovskyDuration[] = {
  2, 4, 2, 4, 4, 4, 4, 4, 4, 4,
  2, 4, 2, 4, 4, 4, 4, 2,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  2, 4, 2, 4, 4, 4, 4, 2 
};

int swDuration[] = {
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4    
};

void setup() {
  for (int thisNote = 0; thisNote < sizeof(postovsky); thisNote++) {
    int noteDuration = 1000 / postovskyDuration[thisNote];
    tone(8, postovsky[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(8);
  }
}

void loop() {
}
