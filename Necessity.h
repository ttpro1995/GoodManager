#pragma once
//Group 9 - APCS 13ctt - a example of visitor 
#include "Visitable.h"
class Necessity:public Visitable
{
private:
	double price;
public:
	double accept(Visitor&);
	Necessity(int);
	double getPrice();

};

