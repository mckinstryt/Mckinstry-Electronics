//Thomas McKinstry
//LAB 2



//functions
void upDown(){
  int lights[]={2,3,4,5,6,7,8,9,10,11};
  for (int i = 0; i < 10; i++){
    digitalWrite(lights[i], HIGH);
    delay(100);
    digitalWrite(lights[i],LOW);
  }//end for loo
  for (int i = 9; i >=0; i--){
    digitalWrite(lights[i], HIGH);
    delay(100);
    digitalWrite(lights[i],LOW);
    }
  
  
}//end up down

void allOn(){
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  
   delay(500);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  
  delay(500);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  
   delay(500);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  
}//end all on

 void comeIn(){
   int lights[]={2,3,4,5,6,7,8,9,10,11};
  for (int i = 0; i <= 5; i++){
    digitalWrite(lights[i], HIGH);
    digitalWrite(lights[9-i], HIGH);
    delay(500);
    
    //turn off lights 
    
    
    
    
  }//end for loop

   digitalWrite(3, LOW);
   digitalWrite(5, LOW);
   digitalWrite(7, LOW);
   digitalWrite(9, LOW);
   digitalWrite(2, LOW);
   digitalWrite(4, LOW);
   digitalWrite(6, LOW);
   digitalWrite(8, LOW);
   digitalWrite(10,LOW);
   digitalWrite(11,LOW);  
   
 }//end come in 
 
 void redGreen(){
   //red on 
   digitalWrite(2, HIGH);
   digitalWrite(4, HIGH);
   digitalWrite(6, HIGH);
   digitalWrite(8, HIGH);
   digitalWrite(10,HIGH);
   delay(400);
   digitalWrite(2, LOW);
   digitalWrite(4, LOW);
   digitalWrite(6, LOW);
   digitalWrite(8, LOW);
   digitalWrite(10,LOW);
   //green on
   digitalWrite(3, HIGH);
   digitalWrite(5, HIGH);
   digitalWrite(7, HIGH);
   digitalWrite(9, HIGH);
   digitalWrite(11,HIGH);
   delay(400);
   //red on
   digitalWrite(3, LOW);
   digitalWrite(5, LOW);
   digitalWrite(7, LOW);
   digitalWrite(9, LOW);
   digitalWrite(11, LOW);
   digitalWrite(2, HIGH);
   digitalWrite(4, HIGH);
   digitalWrite(6, HIGH);
   digitalWrite(8, HIGH);
   digitalWrite(10,HIGH);
   //digitalWrite(11,HIGH);
   delay(400);
   digitalWrite(2, LOW);
   digitalWrite(4, LOW);
   digitalWrite(6, LOW);
   digitalWrite(8, LOW);
   digitalWrite(10,LOW);
   //green on
   digitalWrite(3, HIGH);
   digitalWrite(5, HIGH);
   digitalWrite(7, HIGH);
   digitalWrite(9, HIGH);
   digitalWrite(11,HIGH);
   
 
 }
   


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
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
        
  
}

void loop(){
  upDown();
  allOn();
   comeIn();
  redGreen();
}
