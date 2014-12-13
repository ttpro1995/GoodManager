#include "Food.h"
#include <string>
using namespace std;
//This source code is avaiable at my github account https://github.com/ttpro1995/GoodManager
#include "Visitor.h"
Food::Food(int price,string a) :Necessity(price)
{
	description = a;
}


Food::~Food()
{
}


double  Food::accept(Visitor& v)
{
	return v.visit(*this);
	
}

string Food::getDescription()
{
	return description;
}