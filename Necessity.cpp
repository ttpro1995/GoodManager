//Group 9 - APCS 13ctt - a example of visitor 
#include "Necessity.h"
#include "Visitor.h"
//This source code is avaiable at my github account https://github.com/ttpro1995/GoodManager
Necessity::Necessity(int a)
{
	price = a;
}



double::Necessity::accept(Visitor& visitor)
{
return	visitor.visit(*this);
}

double ::Necessity::getPrice()
{
	return price;
}
