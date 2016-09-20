import processing.serial.*; 

Serial myPort; 
int xPos = 1; 

void setup () { 
  size(800, 300); 
  println(Serial.list()); 
  
  myPort = new Serial(this, Serial.list()[2], 9600); 
  myPort.bufferUntil('\n'); 
  background(0); 
} 

void draw () { 
  
} 

void serialEvent (Serial myPort) { 
  String inString = myPort.readStringUntil('\n'); 
  
  if (inString != null) { 
    inString = trim(inString); 
    float inByte = float(inString); 
    inByte = map(inByte, 0, 50, 0, height); 
    
    stroke(127,34,255); 
    line(xPos, height, xPos, height - inByte); 
    
    if (xPos >= width) { 
      xPos = 0; 
      background(0); 
    } 
    
    else { 
      xPos++; 
    } 
  } 
}