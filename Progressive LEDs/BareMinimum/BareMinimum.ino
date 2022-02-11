void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly: 
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(7, LOW);
  delay(1000);
  digitalWrite(10, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
  digitalWrite(7, HIGH);
  delay(1000);
  digitalWrite(10, LOW);
  delay(1000);

}
