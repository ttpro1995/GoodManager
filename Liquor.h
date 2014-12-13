//Group 9 - APCS 13ctt - a example of visitor 
//This source code is avaiable at my github account https://github.com/ttpro1995/GoodManager
#pragma once
#include "Visitable.h"
class Liquor :
	public Visitable
{
private:
	double price;
public:
	 double accept(Visitor&);
	Liquor(int a);
	double getPrice();
};

