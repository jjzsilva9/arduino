#include <Servo.h>
#include <IRremote.hpp>


const int irPin = 8;
const int servoPin = 3;

int value = 0;
IRrecv irrecv(irPin);
decode_results results;

Servo Servo1;

void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn();
  Servo1.attach(servoPin);
  Servo1.write(0);
  value = Servo1.read();
}

void loop() {
  // put your main code here, to run repeatedly:
  if (irrecv.decode(&results))
  {
    if (results.value != 0){
      value = Servo1.read();
      if (value == 180)
      {
        Servo1.write(0);
      } else if (value == 0) {
        Servo1.write(180);
      }
      delay(100);
    }
    irrecv.resume();
    Serial.println(results.value, HEX);
  }
}
