#include "Product.h"
using namespace std;

Product::Product()
{
	cout << "Call Product Creator " << endl;
}

Product::Product(brand* _Brand)
{
	Brand= _Brand;//ctor 
	cout << "Call Product Creator surcharged " << endl;
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
