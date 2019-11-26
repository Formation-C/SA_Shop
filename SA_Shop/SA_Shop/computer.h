#pragma once


#include "Product.h"


class Computer : public Product
{
public:
	int RAM;
	int screen_size;
	bool isLaptop;

	Computer();
	virtual ~Computer();

	void turnOnOff();

protected:

private:
	void update();
};



