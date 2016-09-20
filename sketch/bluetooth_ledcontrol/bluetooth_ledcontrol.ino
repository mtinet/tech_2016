#include <SoftwareSerial.h>

int bluetoothTx = 2;
int bluetoothRx = 3;
int led=4;

SoftwareSerial bluetooth(bluetoothTx, bluetoothRx);

void setup() { //Setup usb serial connection to computer
 Serial.begin(9600); //Setup Bluetooth serial connecti/on to android
 delay(100);
 bluetooth.begin(9600);
 pinMode(led, OUTPUT);
}

void loop() {
 if(bluetooth.available()) {
  char cmd = (char)bluetooth.read();
  if(cmd == 'n') {
   Serial.println("LED ON!");
   digitalWrite(led, HIGH); 
}
 if(cmd == 'f') {
  Serial.println("LED OFF");
  digitalWrite(led, LOW);
  }
 }
}
