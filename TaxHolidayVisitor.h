#pragma once
//Group 9 - APCS 13ctt - a example of visitor 
//This source code is avaiable at my github account https://github.com/ttpro1995/GoodManager
#include "Visitor.h"
class TaxHolidayVisitor :
	public Visitor
{
public:


	double visit(Necessity&); //5 %
	double visit(Tobacco&);//10%
	double visit(Liquor&);//15%
	double visit(Food&);//5%
	double visit(FirstAid&);//no tax on holiday
};

