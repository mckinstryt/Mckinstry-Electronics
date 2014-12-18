//Kingle Bells w/ PieZO
//Thomas McKinstry


//define speaker port
int speaker =11;

//variables for rythm:

int tempo=1000;
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



//function twinkle 1
void Bells1(){
  
  int lineANotes[]={e4,e4,e4,e4,e4,e4,e4,g4,c4,d4,e4};
  int lineARythm[]={q,q,h,q,q,h,q,q,q,q,w};

  for(int n=0; n<11; n++){
    tone(speaker, lineANotes[n]*2, lineARythm[n]);
    delay(lineARythm[n]);
  }



}//end bells1


void Bells2(){
  
  int lineANotes[]={f4,f4,f4,f4,f4,e4,e4,e4,e4,d4,d4,e4,d4,g4};
  int lineARythm[]={q,q,q,q,q,q,q,q,q,q,q,q,h,h};

  for(int n=0; n<14; n++){
    tone(speaker, lineANotes[n]*2, lineARythm[n]);
    delay(lineARythm[n]);
  }
}//end for 

//function line 3
void Bells3(){
  
  int lineANotes[]={e4,e4,e4,e4,e4,e4,e4,g4,c4,d4,e4};
  int lineARythm[]={q,q,h,q,q,h,q,q,q,q,w};

  for(int n=0; n<11; n++){
    tone(speaker, lineANotes[n]*2, lineARythm[n]);
    delay(lineARythm[n]);
  }



}//end bells3
    
    void Bells4(){
  
  int lineANotes[]={f4,f4,f4,f4,f4,e4,e4,e4,g4,g4,f4,d4,c4};
  int lineARythm[]={q,q,q,q,q,q,q,q,q,q,q,q,w};

  for(int n=0; n<13; n++){
    tone(speaker, lineANotes[n]*2, lineARythm[n]);
    delay(lineARythm[n]);
  }
}//end for 
  

void setup(){
  
  //set speaker pin ot output 
  pinMode(speaker,OUTPUT);
  
  
}//end setup


void loop(){
  //scaleUp();
  Bells1();
  Bells2();
  Bells3();
  Bells4();
  
}//end loop 
