#include "computer.h"


Computer::Computer()
{
	//ctor 
}

Computer::~Computer()
{
	//dtor 
}

void Computer::turnOnOff()
{
	cout << "Called Computer turnoff " << endl;
	update();
}

void Computer::update()
{
	cout << "Called Computer Update " << endl;
}