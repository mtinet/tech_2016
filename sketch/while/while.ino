int led=11;
int i=0;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  while(i<255){
    i=i+1;
    analogWrite(led, i);
    delay(20);              
  }
  while(i>0){
    i=i-1;
    analogWrite(led, i);
    delay(20);              
  }
}

