#pragma once
//Group 9 - APCS 13ctt - a example of visitor 
#include "Visitable.h"
class Tobacco:public Visitable
{
private:
	double price;
public:
	Tobacco(int a);

	double getPrice();
	double accept(Visitor&);
};

