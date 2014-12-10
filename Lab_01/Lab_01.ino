 //Sketch and serial printing
//THOMAS MCKINSTRY
//LAB 01

//functions

//i am arduino function
void function1(String text){
  String result= text;
  Serial.println(result);  
}

void function2a (int x, int y){
  int result= (x/2)*y; 
  Serial.println(result);
}

//favorite movie characters array 
void function3(){
  //array
  String characters[]={" Chewbacca ", " Buzz LightYear ", " Hero ", " Kevin McCalister ", " Ewoks"};
  Serial.println("My favorite movie characters are:  ");
  for (int i = 0; i < 5; i++){
   Serial.println(characters[i]);
  } 
}
 void function4(){
   //array
   int numbers[]={1,2,3,4,5,6,7,8};
   for(int i=0; i<8; i++){
     Serial.println(numbers[i]);
   }
   for(int i=7; i>=0; i--){
     Serial.println(numbers[i]);
   }
   for(int i=1; i<=8; i+=2){
     Serial.println(numbers[i]);
   }
    for(int i=0; i<=7; i+=2){
     Serial.println(numbers[i]);
   
   }
   for(int i=6; i>=0; i-=2){
     Serial.println(numbers[i]);
   } 
   for(int i=7; i>=1; i-=2){
     Serial.println(numbers[i]);
   }    
 }
 //fibonacci where you are and add previous number in sequence 1,2,3,5,8....   Fibo=Cur + prev -> copy cur to previous and make fibo cur 
 
 
   void function5(){
     String pitches[]={"C", "D", "E", "F", "G","A", "B", "C","C","B","A","G","F","E","D", "C"};
     
     for(int i=0; i<=15; i++){
     Serial.println(pitches[i]);
   }    
   }
 void function6(int n){
   int fibo=0;
   int prev=0;
   int cur=1;
   Serial.println("Fibonacci Sequence Starts: ");
   for(int i=0; i<n;i++){
           fibo= prev+cur; 
          Serial.println(fibo);  
          //move values
          prev=cur;
          cur=fibo; 
 }
 }
 
   float findPowerOf5(int s){
     float a= pow(5,s);
     return a; 
   }


// Wild numbers
	void function8() {
	 for (int i = 0; i < 100000; i++) {
 	Serial.println(i*10);

     //i expect the outputted numbers to be randon numbers under the value of 100000
       //the numbers count up by 10's at first and then at a 16 bit number the numbers begin to be negative
       //This happens because it starts with an 1 value of o and tells it to go up by one but then it says i*10 which increases the value by 10 each time and then decreasing it by 10
     // i can change the results by modifying the numbers that i is multiplied by and i can change the  i++ to i-- or i+=2 or i-=2 etc..
     
     
     }
}

void function9(){
  long sum = 0;
  
  for (int i = 0; i < 1000; i++) {
    if((i%3 == 0) || (i%5 == 0)) {
       sum+=i;
    }
       
  }
    Serial.println(sum);
       }

void function10(int n) {
  String words [] = {"Man", "Bear", "Pig", "Small Children", "Old People", "Burning"};
  randomSeed(analogRead(0));
  for(int x = 0; x< 5; x++) {
    int a = int(random(5));
    Serial.println(words[a]);
  }
}
 
void setup(){
  Serial.begin(9600);//start serial 
  function1("I am an Arduino and I communicate at \n 9600 Baud rate. Ports 0 and 1 are used \n for serial communication.  \n \n Serial communication works well for debugging \n and monitoring sensor values during the \n execution of a program.");
  
  function2a(120,512);
  function3();
  function4();
  function5();
  function6(10);
 //prints area of the square 
 Serial.println("5 to the power of 5 is: "); 
 Serial.println(findPowerOf5(5));
 //function8();
 Serial.println("The sum of multiples of 3 and 5 under 1000 is: ");
  function9();
  function10(2);
}//end setup

void loop(){
  
  
}//End loop
