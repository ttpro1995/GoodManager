#include "Food.h"
#include <string>
using namespace std;
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