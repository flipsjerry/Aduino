void setup() {
  pinMode(9, OUTPUT);

}

void loop() {
  //digitalWrite(8, HIGH); //HIGH = 1
  for(int i = 0; i < 256; i++){
    analogWrite(9, i);
    delay(10);
  }


}
