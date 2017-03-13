int tlacitko = 0;
int rnd = 3;

void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(2, INPUT);
    
}

void loop() {
    tlacitko = digitalRead(2);
    
    if (tlacitko == LOW) {
      digitalWrite(3, HIGH); //spodni rozsvit
      digitalWrite(4, LOW);  //prostredni zhasni
      digitalWrite(5, LOW);  //horni zhasni
    }
    else {

       for (int i=0; i <= 50; i++){
        for (int j=2; j<7; j++) {
           delay(200);
          digitalWrite(j, LOW);
          digitalWrite(j+1, HIGH);
           
        }
   } 
    }
}

