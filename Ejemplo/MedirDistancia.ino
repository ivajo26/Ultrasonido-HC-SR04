#include <Ultrasonido.h>
//CREADO POR DEYBYSTIVEN GARCIA MONTES & IVAN JOSE DIAZ MORALES
//estudiantes de ingenieria de sistemas de la universidad de cordoba Colombia sede Monteria
// Usamos la libreria y declaramos un nombre "Sensor"(o nombre a elegir)
// y usamos la funcion Ultrasonido(trigger,echo) para incicar la funcion
// de cada pin usado respectivamente, como lo muestra la funcion.

Ultrasonido Sensor=Ultrasonido(2,3);
void setup()
{
 Serial.begin(9600);
}
void loop()
{
  //Usamos la funcion Distancia() indicadola que es de nuestro sensor
  // declarado preciamente, esta funcion nos devuelve el valor calculado
  // el cual guardamos y luego mostramos en pantalla 
  distancia=Sensor.Distancia();
  Serial.println(distancia);
  delay(100);
}