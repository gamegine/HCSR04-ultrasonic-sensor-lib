#include <Arduino.h>
class HCSR04
{
	public:
	HCSR04(int out,int echo);				//initialisation class HCSR04 (trig pin , echo pin)
	~HCSR04();								//destructor
	float dist()      const;				//return curent distance of element 0

	private:
	int out;								//out pin
	int echo;								//echo pin list
};
