#pragma once

#include <iostream>
using namespace std;

class Product
	{

	public:

		int id;

		float price;

		int product_size;

		string model;

		Product();

		virtual ~Product();

		virtual void turnOnOff() = 0; // virtual signifie qu'elle peut être redéclarer dans une autre classe fille
		// = 0 signifie que c'est une classe abstraite
	protected:

	private:

	};



