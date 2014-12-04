//Test of Arduino
//Blink
 
//pin 13 onboard LED
int led =13;

//setup runs one time when board is activated

void setup(){
  //pin 13 output
  pinMode(led, OUTPUT);
}

//loop function runs repeatedly while board is on

void loop(){
  digitalWrite(led, HIGH); //turn led 13 on
  delay(1000);// wait 1 sec
  digitalWrite(led, LOW);//turn led 13 off
  delay(1000);//wait 1 second 
}
