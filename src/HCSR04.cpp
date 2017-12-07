#include "HCSR04.h"
////////////////////////////////////consttruct/destruct
HCSR04::HCSR04(int out,int echo)
{
	this->out = out;
	this->echo = echo;
	pinMode(this->out, OUTPUT);
	pinMode(this->echo, INPUT);
}
HCSR04::~HCSR04()
{
	~this->out;
	~this->echo;
}
///////////////////////////////////////////////////dist
float HCSR04::dist() const
{
	digitalWrite(this->out, LOW);
	delayMicroseconds(2);
	digitalWrite(this->out, HIGH);
	delayMicroseconds(10);
	digitalWrite(this->out, LOW);
	return pulseIn(this->echo, HIGH) / 58.0;
}