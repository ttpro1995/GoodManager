#include "TaxVisitorFactory.h"
//This source code is avaiable at my github account https://github.com/ttpro1995/GoodManager

TaxVisitorFactory::TaxVisitorFactory()
{
}


TaxVisitorFactory::~TaxVisitorFactory()
{
}

Visitor* ::TaxVisitorFactory::CreateTaxVisitor(int choice)
{
	
	if (choice)
	{
		return new TaxHolidayVisitor();
	}
	if (!choice)
	{
		return new TaxVisitor();
	}
}