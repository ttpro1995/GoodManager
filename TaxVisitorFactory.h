#pragma once
#include "TaxVisitor.h"
#include "TaxHolidayVisitor.h"
//This source code is avaiable at my github account https://github.com/ttpro1995/GoodManager
class TaxVisitorFactory
{
	//This class will decide if TaxVisitor or TaxHolidayVisitor is create
public:
	Visitor* CreateTaxVisitor(int);//0 is TaxVisitor
									//1 is TaxHolidayVisitor
	TaxVisitorFactory();
	~TaxVisitorFactory();
};

