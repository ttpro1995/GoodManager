#include "TaxVisitorFactory.h"


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