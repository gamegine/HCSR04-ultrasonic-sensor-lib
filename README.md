= HCSR04 ultrasonic sensor Library for Arduino =
==========
HCSR04 is an [Arduino](http://arduino.cc) library HCSR04 Sensors

![HC-SR04](HC_SR04.jpg)

Documentation
-------------
Documentation for the library is on the
[Github Project Pages](https://github.com/gamgine/HCSR04-ultrasonic-sensor-lib)

[basic example](examples/HCSR04/HCSR04.ino)

![schéma](examples/HCSR04/HC_SR04_cabling.jpg)
```ino
#include <HCSR04.h>

HCSR04 hc(2,3);//initialisation class HCSR04 (trig pin , echo pin)

void setup()
{ Serial.begin(9600); }

void loop() 
{ Serial.println( hc.dist() ); } //return current distance (cm) in serial
```

Download
--------
The last version of the Library is available on the github
[HCSR04 Page](https://github.com/gamgine/HCSR04-ultrasonic-sensor-lib/releases) 


Install
-------
The library can be installed using the [standard Arduino library install procedure](http://arduino.cc/en/Guide/Libraries)  

[License](https://github.com/gamgine/HCSR04-ultrasonic-sensor-lib/blob/master/LICENSE)
-------
[MIT License](https://github.com/gamgine/HCSR04-ultrasonic-sensor-lib/blob/master/LICENSE)
