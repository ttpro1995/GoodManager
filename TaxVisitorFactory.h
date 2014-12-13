#pragma once
#include "TaxVisitor.h"
#include "TaxHolidayVisitor.h"
class TaxVisitorFactory
{
	//This class will decide if TaxVisitor or TaxHolidayVisitor is create
public:
	Visitor* CreateTaxVisitor(int);//0 is TaxVisitor
									//1 is TaxHolidayVisitor
	TaxVisitorFactory();
	~TaxVisitorFactory();
};

