#pragma once
#include <iostream>
using namespace std;

class brand
{
public:
	brand();
	virtual ~brand();
	int GetId(){return brand::id;};
	void SetId(int val) { brand::id = val;};
	string GetName() {return brand::name;};
	void SetName(string _name) { brand::name = _name;};
	string GetLogo() { return brand::logo; };
	void SetLogo(string _logo) { brand::logo = _logo; };

protected:
private:
	int id;
	string name;
	string logo;

};

