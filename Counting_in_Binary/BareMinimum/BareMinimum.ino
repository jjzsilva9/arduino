int pin1 = 5;
int pin2 = 4;
int pin3 = 3;
int pin4 = 2;
void setup() {
  // put your setup code here, to run once:
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly: 
  
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);

  delay(1000);

  digitalWrite(pin1, HIGH);

  delay(1000);

  digitalWrite(pin1, LOW);
  digitalWrite(pin2, HIGH);

  delay(1000);

  digitalWrite(pin1, HIGH);

  delay(1000);

  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, HIGH);

  delay(1000);

  digitalWrite(pin1, HIGH);

  delay(1000);

  digitalWrite(pin1, LOW);
  digitalWrite(pin2, HIGH);

  delay(1000);

  digitalWrite(pin1, HIGH);

  delay(1000);

  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, HIGH);

  delay(1000);

  digitalWrite(pin1, HIGH);

  delay(1000);

  digitalWrite(pin1, LOW);
  digitalWrite(pin2, HIGH);

  delay(1000);

  digitalWrite(pin1, HIGH);

  delay(1000);

  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, HIGH);

  delay(1000);

  digitalWrite(pin1, HIGH);

  delay(1000);

  digitalWrite(pin1, LOW);
  digitalWrite(pin2, HIGH);

  delay(1000);

  digitalWrite(pin1, HIGH);

  delay(1000);
}
