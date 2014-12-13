#include "TaxVisitor.h"
//Group 9 - APCS 13ctt - a example of visitor 
//This source code is avaiable at my github account https://github.com/ttpro1995/GoodManager


double ::TaxVisitor::visit(Necessity& good) //10%
{
	int price = good.getPrice();
	int tax = price / 10;
	return tax + price;
}

double ::TaxVisitor::visit(Tobacco& good)//20%
{
	int price = good.getPrice();
	int tax = price * 20 / 100;
	return tax + price;
}
double ::TaxVisitor::visit(Liquor& good)//30%
{
	int price = good.getPrice();
	int tax = price * 30 / 100;
	return tax + price;
}

double ::TaxVisitor::visit(Food& good) //10%
{
	int price = good.getPrice();
	int tax = price / 10;
	return tax + price;
}

double ::TaxVisitor::visit(FirstAid& good) //5%
{
	int price = good.getPrice();
	int tax = price / 20;
	return tax + price;
}