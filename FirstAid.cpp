#include "FirstAid.h"
#include "Visitor.h"
//This source code is avaiable at my github account https://github.com/ttpro1995/GoodManager
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