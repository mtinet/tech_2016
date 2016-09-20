void setup()
{
  Serial.begin(9600);
  pinMode(4, OUTPUT);
  digitalWrite(4,HIGH);
}
void loop()
{
  int c = Serial.read();
  delay(1);
  if (c == 97) {
    Serial.println("'a' was received! relay off");
    digitalWrite(4,LOW);
  }
  if (c == 98) {
    Serial.println("'b' was received! relay on");
    digitalWrite(4,HIGH);
  }
}
