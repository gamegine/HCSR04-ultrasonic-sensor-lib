#include "HCSR04.h"
////////////////////////////////////consttruct/destruct
void HCSR04::init(int out,int echo[])
{
	this->out = out;
	this->echo = echo;
	pinMode(this->out, OUTPUT);
	for(int i=0;i<sizeof(echo);i++)
	{ pinMode(this->echo[i], INPUT); }
}
HCSR04::HCSR04(int out,int echo){this->init(out,new int[1]{echo});}
HCSR04::HCSR04(int out,int echo[]){this->init(out,echo);}
HCSR04::~HCSR04()
{
	~this->out;
	delete[] this->echo;
}
///////////////////////////////////////////////////dist
float HCSR04::dist(int n) const
{
	digitalWrite(this->out, LOW);
	delayMicroseconds(2);
	digitalWrite(this->out, HIGH);
	delayMicroseconds(10);
	digitalWrite(this->out, LOW);
	return pulseIn(this->echo[n], HIGH) / 58.0;
}
float HCSR04::dist() const{return this->dist(0);}
