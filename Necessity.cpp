//Group 9 - APCS 13ctt - a example of visitor 
#include "Necessity.h"
#include "Visitor.h"

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
