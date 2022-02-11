int myPin = A3;
int readVal;
int warningLed = 3;
float brightness;
void setup() {
  // put your setup code here, to run once:
  pinMode(myPin, INPUT);
  pinMode(warningLed, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(myPin);
  brightness = (255./1023.) * readVal;
  analogWrite(warningLed, brightness);
  Serial.println(brightness);
}
