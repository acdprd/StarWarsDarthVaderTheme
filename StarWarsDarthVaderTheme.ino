#define LED_1 2
#define LED_2 5
#define LED_3 7
#define LED_4 8
#define PIEZO 3

const int c = 261;
const int   d = 294;
const int   e = 329;
 const int  f = 349;
 const int  g = 391;
 const int  gS = 415;
const int   a =440;
 const int  aS = 455;
 const int  b =466;
 const int  cH = 523;
const int   cSH = 554;
 const int  dH = 587;
const int   dSH = 622;
 const int  eH = 659;
 const int  fH = 698;
 const int  fSH = 740;
 const int  gH = 784;
 const int  gSH = 830;
 const int  aH = 880;

int posList[4] = {LED_1, LED_2, LED_4, LED_3,};
int curPos = 0;
 
void setup() {
  // put your setup code here, to run once:
pinMode(PIEZO, OUTPUT);
pinMode(LED_1, OUTPUT);
pinMode(LED_2, OUTPUT);
pinMode(LED_3, OUTPUT);
pinMode(LED_4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    play(a, 500);
    play(a, 500);
    play(a, 500);
    play(f, 350);
    play(cH, 150);  
    play(a, 500);
    play(f, 350);
    play(cH, 150);
    play(a, 650);
 
    pause(150);
    //end of first bit   
 
    play(eH, 500);
    play(eH, 500);
    play(eH, 500);   
    play(fH, 350);
    play(cH, 150);
    play(gS, 500);
    play(f, 350);
    play(cH, 150);
    play(a, 650);
 
    pause(150);
    //end of second bit...  
 
    play(aH, 500);
    play(a, 300);
    play(a, 150);
    play(aH, 400);
    play(gSH, 200);
    play(gH, 200); 
    play(fSH, 125);
    play(fH, 125);    
    play(fSH, 250);
 
    pause(250);
 
    play(aS, 250); 
    play(dSH, 400); 
    play(dH, 200);  
    play(cSH, 200);  
    play(cH, 125);  
    play(b, 125);  
    play(cH, 250);  
 
    pause(250);
 
    play(f, 125);  
    play(gS, 500);  
    play(f, 375);  
    play(a, 125);
    play(cH, 500);
    play(a, 375);  
    play(cH, 125);
    play(eH, 650);
 
    //end of third bit... (Though it doesn't play well)
    //let's repeat it
 
    play(aH, 500);
    play(a, 300);
    play(a, 150);
    play(aH, 400);
    play(gSH, 200);
    play(gH, 200);
    play(fSH, 125);
    play(fH, 125);    
    play(fSH, 250);
 
    pause(250);
 
    play(aS, 250);  
    play(dSH, 400);  
    play(dH, 200);  
    play(cSH, 200);  
    play(cH, 125);  
    play(b, 125);  
    play(cH, 250);      
 
    pause(250);
 
    play(f, 250);  
    play(gS, 500);  
    play(f, 375);  
    play(cH, 125);
    play(a, 500);   
    play(f, 375);   
    play(cH, 125); 
    play(a, 650);   
    //endof the song
    
    stop();
    pause(10000);
}

void play(int note,int duration){
  tone(PIEZO, note);
  turnOn(posList[curPos]);
  delay(duration + 20);
  turnOff(posList[curPos]);
  ++curPos;
  if  (curPos==4) curPos = 0;
}

void pause(){
  pause(150);
}

void pause(int duration){
  delay(duration);
}

void stop(){
  noTone(PIEZO);
}

void turnOn(int ledPos){
  digitalWrite(ledPos,HIGH);
}

void turnOff(int ledPos){
  digitalWrite(ledPos,LOW);
}

