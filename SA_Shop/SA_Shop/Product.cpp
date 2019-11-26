#include "Product.h"

  

Product:: Product()
{
	//ctor 
}

Product::~Product()
{
	//dtor 
}

// not necessary as abstract
void Product::turnOnOff()
{
	cout << "Called Product turnoff " << endl;
	
}
