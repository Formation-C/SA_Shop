#pragma once

#include <iostream>

#include "brand.h"
using namespace std;

class Product
	{

	public:

		int id;

		float price;

		int product_size;

		string model;

		brand* Brand; //Composition
		
		Product();

		Product(brand* _Brand);

		virtual ~Product();

		virtual void turnOnOff() = 0; // virtual signifie qu'elle peut être redéclarer dans une autre classe fille
		// = 0 signifie que c'est une classe abstraite
	protected:

	private:

	};



