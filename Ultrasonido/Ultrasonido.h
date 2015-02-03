#ifndef Ultrasonido_h
#define Pltrasonido_h
#include "Arduino.h"

class Ultrasonido
{
  public:
    	Ultrasonido(int trig, int echo);
	long Distancia();
  private:
	int pintrig;
	int pinecho;
};

#endif
