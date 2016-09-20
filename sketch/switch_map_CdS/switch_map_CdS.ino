const int ledpin=13;
const int sensorpin=A0;

void setup()
{
  Serial.begin(9600);
  pinMode(ledpin, OUTPUT);
}

void loop()
{
  int rate = analogRead(sensorpin);
  Serial.print(rate);
  Serial.print("     ");
  int maprate = map(rate, 0, 1023, 0,10);
  Serial.println(maprate);
  
  switch(maprate){
    case 1:      
    digitalWrite(ledpin, HIGH);
    break;
    
    case 2:
    digitalWrite(ledpin, HIGH);
    delay(50);               
    digitalWrite(ledpin, LOW);    
    delay(50);
    break;
    
    case 3:
    digitalWrite(ledpin, HIGH);
    delay(200);               
    digitalWrite(ledpin, LOW);    
    delay(200);
    break;

  }
}
