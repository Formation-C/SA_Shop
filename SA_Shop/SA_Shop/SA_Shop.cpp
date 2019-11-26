// SA_Shop.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "computer.h"

using namespace std;

void displayProduct(Product& product)
{
	cout << "ref_adre :" << &product << endl;
	cout << product.model << endl;
}

void displayProductbypointer(Product * product)
{
	cout << "point_adre :" << product << endl;
	cout << product->model << endl;
}

int main()
{
	//Product under dev
    cout << "Hello World!\n";
	brand carrier;
	carrier.SetName = "Carrier"
	Computer myComputer;
	
	Computer mySecondComputer(&carrier);
	myComputer.model = "PIC6";
	cout << "mycompadre: " << &myComputer << endl;
	displayProduct(myComputer);
	displayProductbypointer(&myComputer);
	myComputer.turnOnOff();
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

