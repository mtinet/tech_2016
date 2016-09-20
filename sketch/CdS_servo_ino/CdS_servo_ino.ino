#include <Servo.h>
int sensorPin = A0;
int val = 0;
Servo servo1;

void setup()
{
  servo1.attach(3);
  Serial.begin(9600);
}

void loop()
{
  val = analogRead(sensorPin);
  Serial.print(val);
  Serial.print("   ");
  val = map(val, 0, 50, 0,180);
  servo1.write(val);
  Serial.println(val);
  delay(100);
}
