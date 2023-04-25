#include <Servo.h>

Servo servoLeft;
Servo servoRight;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
 servoLeft.attach(10);
 servoRight.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
if (Serial.available()>0){
  char data=Serial.read();
  if (data=='3'){
  forward();
}else if(data=='4'){
  turnRight(); 
}else if(data=='2'){
  turnLeft(); 
}else if(data=='5'){
  reverse();  
}else if(data=='1'){
  stopRobot();  
  
}
}
}

void forward(){
servoRight.write(180);
servoLeft.write(180);
}

void reverse(){
servoRight.write(0);
servoLeft.write(0);
}

void turnRight(){
servoRight.write(180);
servoLeft.write(0);
}
void turnLeft(){
servoRight.write(180);
servoLeft.write(180);
}

void stopRobot(){
servoRight.write(90);
servoLeft.write(0);
}

