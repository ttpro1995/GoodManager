#include "FirstAid.h"
#include "Visitor.h"

FirstAid::FirstAid(int price,string a) :Necessity(price)
{
	description = a;
}


FirstAid::~FirstAid()
{
}



double  FirstAid::accept(Visitor& v)
{
	return v.visit(*this);

}

string FirstAid::getDescription()
{
	return description;
}