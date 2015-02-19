#include <Servo.h>

Servo servoA;//plugged into pin 9
Servo servoB;//plugged into pin 10



void setup(){
  
   Serial.begin(9600); 
   
  servoA.attach(9);
  servoB.attach(10);
  
  servoA.write(90);
  servoB.write(90);
  
  //a goes clockwise for 2sec
servoA.write(0);
delay(2000);
servoA.write(90);

////B goes clockwise for 2 sec
servoB.write(0);
delay(2000);
servoB.write(90);
//
////both spin counter clockwise for 4 sec
servoA.write(180);
servoB.write(180);
delay(2000);
servoA.write(90);
servoB.write(90);
//
////  servo a and b spin clockwise for 3
servoA.write(0);
servoB.write(0);
delay(3000);
servoA.write(90);
servoB.write(90);
//
////B goes counter clock for 1 sec
servoB.write(180);
delay(1000);
servoB.write(90);
//
//
////A goes counter 
servoA.write(180);
delay(1000);
servoA.write(90);
//  
  
}//end setup



void loop(){
  
  
  //Serial.println(analogRead(0));
  
  if(analogRead(0) >800){
    servoA.write(0);
    servoB.write(180);
//   
    
 }//end if
  
   if(analogRead(0) <800){
    servoA.write(90);
    servoB.write(90);
    
  }//end if
  
  
}



