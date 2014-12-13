#include "Liquor.h"
#include "Visitor.h"
//Group 9 - APCS 13ctt - a example of visitor 
//This source code is avaiable at my github account https://github.com/ttpro1995/GoodManager
Liquor::Liquor(int a)
{
	price = a;
}



double Liquor::getPrice()
{
	return price;
}

double::Liquor::accept(Visitor& visitor)
{
	return	visitor.visit(*this);
}
