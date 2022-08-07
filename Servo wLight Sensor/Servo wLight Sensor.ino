void setup() {
  servo.attach(9);
  Serial.begin(9600);
}

void loop() {
  int readValue = analogRead(A0);
  Serial.println(readValue);

  if(readValue > 1000){
    servo.write(0);
    delay(2000);
    servo.write(180);
  }
}
