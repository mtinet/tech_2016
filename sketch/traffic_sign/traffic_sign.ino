int c_red = 13;
int c_yellow = 12;
int c_green = 11;
int p_red = 10;
int p_green = 9;

void setup(){
  pinMode(c_red, OUTPUT);
  pinMode(c_yellow, OUTPUT);
  pinMode(c_green, OUTPUT);
  pinMode(p_red, OUTPUT);
  pinMode(p_green, OUTPUT);
}

void loop(){
  digitalWrite(c_red, LOW);
  digitalWrite(c_yellow, LOW);
  digitalWrite(c_green, HIGH);
  digitalWrite(p_red, HIGH);
  digitalWrite(p_green, LOW);
  delay(3000);
  digitalWrite(c_red, LOW);
  digitalWrite(c_yellow, HIGH);
  digitalWrite(c_green, LOW);
  digitalWrite(p_red, HIGH);
  digitalWrite(p_green, LOW);
  delay(1000);
  digitalWrite(c_red, HIGH);
  digitalWrite(c_yellow, LOW);
  digitalWrite(c_green, LOW);
  digitalWrite(p_red, LOW);
  digitalWrite(p_green, HIGH);
  delay(3000);
}
