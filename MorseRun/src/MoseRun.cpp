// MorseRun.cpp
#include "MorseRun.h"

char* m[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--..","-----",".----","..---","...--","....-",".....","-....","--...","---..","----."};
char* n = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

void MorseRun::begin(int pin, long baud){
  _pin = pin;
  pinMode(_pin, OUTPUT);
  digitalWrite(_pin, HIGH);
  Serial.begin(baud);
}

void MorseRun::run() {
  if(Serial.available()) {
    String s=Serial.readStringUntil('\n');
    for(int i=0;i<s.length();i++) {
      char c=s[i];
      if(c==32)delay(700);
      else for(int j=0;j<36;j++) 
        if(n[j]==c) {
          Serial.print(c); Serial.print('('); Serial.print(m[j]); Serial.print(')');
          for(int k=0; m[j][k];digitalWrite(_pin,0),delay(m[j][k++]=='.'?80:240),digitalWrite(_pin, 1),delay(m[j][k]?150:600));
          break;
        }
    }
  }
}

MorseRun Morse;