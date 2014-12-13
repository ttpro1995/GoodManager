#include "Liquor.h"
#include "Visitor.h"
//Group 9 - APCS 13ctt - a example of visitor 
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
