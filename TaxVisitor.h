#pragma once
//Group 9 - APCS 13ctt - a example of visitor 
//This source code is avaiable at my github account https://github.com/ttpro1995/GoodManager
#include "Visitor.h"
class TaxVisitor :
	public Visitor
{
public:

	double visit(Necessity&); //10 %
	double visit(Tobacco&);//20%
	double visit(Liquor&);//30%
	double visit(Food&);//10
	double visit(FirstAid&);//5% only
};

