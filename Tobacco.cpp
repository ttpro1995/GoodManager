#include "Tobacco.h"
#include "Visitor.h"
//Group 9 - APCS 13ctt - a example of visitor 
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