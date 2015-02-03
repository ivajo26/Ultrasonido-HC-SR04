#include "Arduino.h"
#include "Ultrasonido.h"

Ultrasonido::Ultrasonido(int trig, int echo){
	pinMode(trig, OUTPUT);
	pinMode(echo, INPUT);	
	pintrig=trig;
	pinecho=echo;
}

long Ultrasonido::Distancia(){
	long duracion, distancia;
	digitalWrite(pintrig, LOW);
	delayMicroseconds(2);
	digitalWrite(pintrig, HIGH);
	delayMicroseconds(10);
	digitalWrite(pintrig, LOW);
  
	duracion=pulseIn(pinecho, HIGH);
  
	distancia=(duracion/2)/29;

	return distancia;
}
