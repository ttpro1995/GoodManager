//Group 9 - APCS 13ctt - a example of visitor 
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

