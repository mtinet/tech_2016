//We always have to include the library
#include "LedControl.h"

/*
 Now we need a LedControl to work with.
 ***** These pin numbers will probably not work with your hardware *****
 pin 12 is connected to the DataIn 
 pin 11 is connected to the CLK 
 pin 10 is connected to LOAD(CS)
 We have only a single MAX72XX.
 */
LedControl lc=LedControl(12,11,10,1);

/* we always wait a bit between updates of the display */
unsigned long delaytime=500;

void setup() {
  /*
   The MAX72XX is in power-saving mode on startup,
   we have to do a wakeup call
   */
  lc.shutdown(0,false);
  /* Set the brightness to a medium values */
  lc.setIntensity(0,8);
  /* and clear the display */
  lc.clearDisplay(0);
}


void writeJuhyunOnMatrix() {
  /* here is the data for the characters */
  byte J[8]={B00000000,B00000100,B00000010,B00000001,B00000001,B00000010,B11111100,B00000000};
  byte u[8]={B00000000,B00011110,B00000001,B00000001,B00000001,B00000001,B00011110,B00000000};
  byte h[8]={B00000000,B11111111,B00001000,B00010000,B00010000,B00001000,B00000111,B00000000};
  byte y[8]={B00000000,B11100000,B00010000,B00001001,B00001001,B00010011,B11111110,B00000000};
  byte n[8]={B00000000,B00011111,B00001000,B00010000,B00010000,B00010000,B00001111,B00000000};
  byte q[8]={B01110000,B11111000,B11111100,B01111110,B11111100,B11111000,B01110000,B00000000};
  byte w[8]={B00000000,B01110000,B11111000,B11111100,B01111110,B11111100,B11111000,B01110000};
  byte e[8]={B00000000,B00111000,B01111100,B01111110,B00111111,B01111110,B01111100,B00111000};
  byte r[8]={B00111000,B01111100,B01111110,B00111111,B01111110,B01111100,B00111000,B00000000};  
  
  
  /* now display them one by one with a small delay */
  lc.setRow(0,7,J[0]);
  lc.setRow(0,6,J[1]);
  lc.setRow(0,5,J[2]);
  lc.setRow(0,4,J[3]);
  lc.setRow(0,3,J[4]);
  lc.setRow(0,2,J[5]);  
  lc.setRow(0,1,J[6]);
  lc.setRow(0,0,J[7]);  
  delay(delaytime);
  lc.setRow(0,7,u[0]);
  lc.setRow(0,6,u[1]);
  lc.setRow(0,5,u[2]);
  lc.setRow(0,4,u[3]);
  lc.setRow(0,3,u[4]);
  lc.setRow(0,2,u[5]);  
  lc.setRow(0,1,u[6]);
  lc.setRow(0,0,u[7]);  
  delay(delaytime);
  lc.setRow(0,7,h[0]);
  lc.setRow(0,6,h[1]);
  lc.setRow(0,5,h[2]);
  lc.setRow(0,4,h[3]);
  lc.setRow(0,3,h[4]);
  lc.setRow(0,2,h[5]);  
  lc.setRow(0,1,h[6]);
  lc.setRow(0,0,h[7]);  
  delay(delaytime);
  lc.setRow(0,7,y[0]);
  lc.setRow(0,6,y[1]);
  lc.setRow(0,5,y[2]);
  lc.setRow(0,4,y[3]);
  lc.setRow(0,3,y[4]);
  lc.setRow(0,2,y[5]);  
  lc.setRow(0,1,y[6]);
  lc.setRow(0,0,y[7]);  
  delay(delaytime);
  lc.setRow(0,7,u[0]);
  lc.setRow(0,6,u[1]);
  lc.setRow(0,5,u[2]);
  lc.setRow(0,4,u[3]);
  lc.setRow(0,3,u[4]);
  lc.setRow(0,2,u[5]);  
  lc.setRow(0,1,u[6]);
  lc.setRow(0,0,u[7]);  
  delay(delaytime);
  lc.setRow(0,7,n[0]);
  lc.setRow(0,6,n[1]);
  lc.setRow(0,5,n[2]);
  lc.setRow(0,4,n[3]);
  lc.setRow(0,3,n[4]);
  lc.setRow(0,2,n[5]);  
  lc.setRow(0,1,n[6]);
  lc.setRow(0,0,n[7]);  
  delay(delaytime);
  lc.setRow(0,7,q[0]);
  lc.setRow(0,6,q[1]);
  lc.setRow(0,5,q[2]);
  lc.setRow(0,4,q[3]);
  lc.setRow(0,3,q[4]);
  lc.setRow(0,2,q[5]);  
  lc.setRow(0,1,q[6]);
  lc.setRow(0,0,q[7]);  
  delay(delaytime); 
  lc.setRow(0,7,w[0]);
  lc.setRow(0,6,w[1]);
  lc.setRow(0,5,w[2]);
  lc.setRow(0,4,w[3]);
  lc.setRow(0,3,w[4]);
  lc.setRow(0,2,w[5]);  
  lc.setRow(0,1,w[6]);
  lc.setRow(0,0,w[7]);  
  delay(delaytime); 
  lc.setRow(0,7,e[0]);
  lc.setRow(0,6,e[1]);
  lc.setRow(0,5,e[2]);
  lc.setRow(0,4,e[3]);
  lc.setRow(0,3,e[4]);
  lc.setRow(0,2,e[5]);  
  lc.setRow(0,1,e[6]);
  lc.setRow(0,0,e[7]);  
  delay(delaytime); 
  lc.setRow(0,7,r[0]);
  lc.setRow(0,6,r[1]);
  lc.setRow(0,5,r[2]);
  lc.setRow(0,4,r[3]);
  lc.setRow(0,3,r[4]);
  lc.setRow(0,2,r[5]);  
  lc.setRow(0,1,r[6]);
  lc.setRow(0,0,r[7]);  
  delay(delaytime); 
}


void loop() { 
  writeJuhyunOnMatrix();
}
