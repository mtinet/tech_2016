const int sensorpin=A0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int rate = analogRead(sensorpin);
  Serial.println(rate);
}
