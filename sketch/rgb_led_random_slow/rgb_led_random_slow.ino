int pin1=9;
int pin2=10;
int pin3=11;

long ran;

void setup(){
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
}

void loop(){
  ran=random(1,7);
  
  for(int i=0;i<=255;i=i+10){
  if(ran==1){
    analogWrite(pin1, i);
    delay(10);
  }
    if(ran==2){
    analogWrite(pin2, i);
    delay(10);
  }
    if(ran==3){
    analogWrite(pin3, i);
    delay(10);
  }
    if(ran==4){
    analogWrite(pin1, i);
    analogWrite(pin2, i);
    delay(10);
  }
    if(ran==5){
    analogWrite(pin2, i);
    analogWrite(pin3, i);
    delay(10);
  }
    if(ran==6){
    analogWrite(pin1, i);
    analogWrite(pin3, i);
    delay(10);
  }
    if(ran==7){
    analogWrite(pin1, i);
    analogWrite(pin2, i);
    analogWrite(pin3, i);
    delay(10);
  }
}
}

 

  
  
