#include <HCSR04.h>

HCSR04 hc(2, 3); //initialisation class HCSR04 (trig pin , echo pin)

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    Serial.println(hc.dist()); // return curent distance in serial
    delay(60);                 // we suggest to use over 60ms measurement cycle, in order to prevent trigger signal to the echo signal.
}
