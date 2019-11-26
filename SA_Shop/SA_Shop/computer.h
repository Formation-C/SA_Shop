#pragma once


#include "Product.h"


class Computer : public Product
{
	using Product::Product; // to use the constructor from product

public:
	int RAM;
	int screen_size;
	bool isLaptop;


	virtual ~Computer();

	void turnOnOff();

protected:

private:
	void update();



};



