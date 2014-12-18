//Miusic playing with PIEZO
//Thomas McKinstry


//define speaker port
int speaker =11;

//variables for rythm:

int tempo=1000;
int w=tempo;
int h=w/2;
int q=h/2;
int e=q/2;
int s =e/2;

//define pitches

int c4=261;
int d4=293;
int e4=330;
int f4=350;
int g4=392;
int an4=440;
int b4=494;
int c5=523;

//ascend scale 
void scaleUp(){
  int scale []={c4, d4, e4, f4, g4, an4, b4,c5};

for(int n=0; n<8; n++){
   tone(speaker,scale[n], q);
   delay(q);
}//end for

}//end scale up

//function twinkle 1
void twinkle1(){
  
  int lineANotes[]={c4,c4,g4,g4,an4,an4,g4,f4,f4,e4,e4,d4,d4,c4};
  int lineARythm[]={q,q,q,q,q,q,h,q,q,q,q,q,h};

  for(int n=0; n<14; n++){
    tone(speaker, lineANotes[n]*2, lineARythm[n]);
    delay(lineARythm[n]);
  }



}//end twinkle1


void twinkle2(){
  
  int lineANotes[]={g4,g4,f4,f4,e4,e4,d4,g4,g4,f4,f4, e4,e4, c4};
  int lineARythm[]={q,q,q,q,q,q,h,q,q,q,q,q,q,h};

  for(int n=0; n<14; n++){
    tone(speaker, lineANotes[n]*2, lineARythm[n]);
    delay(lineARythm[n]);
  }
}//end for 

//function twinkle 3
void twinkle3(){
  
  int lineANotes[]={c4,c4,g4,g4,an4,an4,g4,f4,f4,e4,e4,d4,d4,c4};
  int lineARythm[]={q,q,q,q,q,q,h,q,q,q,q,q,h};

  for(int n=0; n<14; n++){
    tone(speaker, lineANotes[n]*2, lineARythm[n]);
    delay(lineARythm[n]);
  }



}//end twinkle1


void setup(){
  
  //set speaker pin ot output 
  pinMode(speaker,OUTPUT);
  
  
}//end setup


void loop(){
  //scaleUp();
  twinkle1();
  twinkle2();
  twinkle3();
  
}//end loop 
