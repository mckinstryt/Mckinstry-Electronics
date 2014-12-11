//Thomas McKinstry
//:LED BLINK TEST

//functions
void blink(){
  digitalWrite(9,HIGH);
  delay(1000);
  digitalWrite(9,LOW);
  delay(1000);
}//end blink




//setup

void setup(){
  pinMode(9, OUTPUT);
}

void loop(){
  blink();
}
