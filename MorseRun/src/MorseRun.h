#ifndef MorseRun_h
#define MorseRun_h

#include <Arduino.h>

class MorseRun {
  public:
    void begin(int pin=7, long baud=9600);
    void run();
    
  private:
    int _pin;
};

extern MorseRun Morse;

#endif