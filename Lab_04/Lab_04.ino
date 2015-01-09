//Lab 4 w/ Piezo Music 
//Thomas McKinstry


//define speaker port
int speaker =11;
int sensorPin=0;
int sensorValue=0;
int inPin=0; 
int val=0; 

//variables for rythm:

int tempo=1500;
int w=tempo;
int h=w/2;
int q=h/2;
int e=q/2;
int s=e/2;

//variables for pitches

int c4=261;
int d4=293;
int e4=330;
int f4=350;
int g4=392;
int an4=440;
int b4=494;
int c5=523;
int d5=587;
int e5=659;
int f5=698;
int g5=783;
int an5=880;
int b5=988;
int c6=1046;
int d6=1174;
int e6=1318;
int f6=1397;
int g6=1568;
int an6=1760;
int b6=1975;



//function line 1
void line1(){
  
  int lineANotes[]={f4,an4,b4,f4,an4,b4,f4,an4,b4,e5,d5,b4,c5,b4,g4,e4,d4,e4,g4,e4};
  int lineARythm[]={e,e,q,e,e,q,e,e,e,e,q,e,e,e,e,h,e,e,e,h};

  for(int n=0; n<20; n++){
    tone(speaker, lineANotes[n]*4, lineARythm[n]);
    delay(lineARythm[n]);
   
}
 
  


}//end line1

void line2(){
  
  int lineANotes[]={f4,an4,b4,f4,an4,b4,f4,an4,b4,e5,d5,b4,c5,e5,b4,g4,b4,g4,d4,e4};
  int lineARythm[]={e,e,q,e,e,q,e,e,e,e,q,e,e,e,e,h,e,e,e,h};

  for(int n=0; n<20; n++){
    tone(speaker, lineANotes[n]*4, lineARythm[n]);
    delay(lineARythm[n]);

  }
//
//
//
//

}

//function line 3
void line3(){
  
  int lineANotes[]={d4,e4,f4,g4,an4,b4,c5,b4,e4,f4,g4,an4,b4,c5,d5,e5,f5,g5};
  int lineARythm[]={e,e,q,e,e,q,e,e,h,e,e,q,e,e,q,e,e,h};

  for(int n=0; n<18; n++){
    tone(speaker, lineANotes[n]*4, lineARythm[n]);
    delay(lineARythm[n]);
 

  }
// 
//  
//




}//end line3
    
    //function line 3
void line4(){
  //MUSIC
  int lineANotes[]={d4,e4,f4,g4,an4,b4,c5,b4,e4,f4,e4,an4,g4,b4,an4,d5,c5};
  int lineARythm[]={e,e,q,e,e,q,e,e,h,e,e,q,e,e,q,e,e,h};
//ARRAY 
  for(int n=0; n<18; n++){
    tone(speaker, lineANotes[n]*4, lineARythm[n]);
    delay(lineARythm[n]);
  
}
// 
  





}//end line4
  
  void line5(){
  
  int lineANotes[]={d5,c5,e5,d5,f5,e5,e5,f5,d5,e5,b5};
  int lineARythm[]={e,e,e,e,e,e,e,e,e,w,e};

  for(int n=0; n<11; n++){
    tone(speaker, lineANotes[n]*4, lineARythm[n]);
    delay(lineARythm[n]);
   

}

  



}//end line5
  

void setup(){
  
  //set speaker pin ot output 
  pinMode(inPin, INPUT);
     Serial.begin(9600);
  pinMode(speaker,OUTPUT);
  
  
}//end setup


void loop(){
  //SETUP SENSOR AND ANALOG READ
  
  sensorValue=analogRead(sensorPin);
   val = analogRead(inPin);
    Serial.println(val);


//if button pushed play song 
if (val > 1000)
{
    //PLAY FUNCTIONS
line1();
line2();
line3();
line4();
line5();
}

  
}//end loop 
