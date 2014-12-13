#include "Tobacco.h"
#include "Visitor.h"
//Group 9 - APCS 13ctt - a example of visitor 
//This source code is avaiable at my github account https://github.com/ttpro1995/GoodManager
Tobacco::Tobacco(int a)
{
	price = a;
}



double ::Tobacco::getPrice()
{
	return price;
}

double::Tobacco::accept(Visitor& visitor)
{
	return	visitor.visit(*this);
}