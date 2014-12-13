#pragma once
//Group 9 - APCS 13ctt - a example of visitor 
//This source code is avaiable at my github account https://github.com/ttpro1995/GoodManager
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

