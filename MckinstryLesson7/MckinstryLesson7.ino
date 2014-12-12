//CLASSWORK:LED ARRAY ASSIGNMENT
//Thomas McKinstry
//All work here is honestly obtained and is my own


//functions
void flash(){
  int lights[]={2,3,4,5,6,7,8,9};
  for (int i = 0; i < 8; i++){
    digitalWrite(lights[i], HIGH);
    delay(250);
    digitalWrite(lights[i],LOW);
  }//end for loop
  for (int i = 8; i >=0; i--){
    digitalWrite(lights[i], HIGH);
    delay(250);
    digitalWrite(lights[i],LOW);
    }
  
  
}//end flash




//setup

void setup(){
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop(){
  flash();
}
