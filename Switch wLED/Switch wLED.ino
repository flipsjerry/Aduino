void setup() {
  Serial.begin(9600);
  pinMode(4, INPUT);
  pinMode(3, INPUT);

  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);

}

void loop() {
  int buttonValue = digitalRead(4);
  int buttonValue2 = digitalRead(3);
  Serial.println(buttonValue);
  Serial.println(buttonValue2);

  if(buttonValue == 1 && buttonValue2 == 1){
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
  }
  else if(buttonValue == 0 && buttonValue2 == 0){
    digitalWrite(9, HIGH);
    digitalWrite(8, HIGH);
  }
  else if(buttonValue == 0; buttonValue2 == 1){
    digitalWrite(9, HIGH);
    digitalWrite(8, LOW);
  }
  else if(buttonValue == 1; buttonValue2 == 0){
    digitalWrite(9, LOW);
    digitalWrite(8, HIGH);
  }


}