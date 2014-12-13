#include "TaxHolidayVisitor.h"

//Group 9 - APCS 13ctt - a example of visitor 
//This source code is avaiable at my github account https://github.com/ttpro1995/GoodManager

double ::TaxHolidayVisitor::visit(Necessity& good)//5%
{
	int price = good.getPrice();
	int tax = price*5 / 100;
	return tax + price;
}

double ::TaxHolidayVisitor::visit(Tobacco& good)//10%
{
	int price = good.getPrice();
	int tax = price * 15 / 100;
	return tax + price;
}
double ::TaxHolidayVisitor::visit(Liquor& good)//15%
{
	int price = good.getPrice();
	int tax = price * 20 / 100;
	return tax + price;
}

double ::TaxHolidayVisitor::visit(Food& good) //10%
{
	int price = good.getPrice();
	int tax = price / 10;
	return tax + price;
}

double ::TaxHolidayVisitor::visit(FirstAid& good) //0%
{
	int price = good.getPrice();
	int tax = 0;
	return tax + price;
}