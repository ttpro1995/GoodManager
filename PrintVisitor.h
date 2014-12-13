#pragma once
#include "Visitor.h"
//This source code is avaiable at my github account https://github.com/ttpro1995/GoodManager
class PrintVisitor :
	public Visitor
{
public:
	double visit(Necessity&); //empty function
	double visit(Tobacco&);//empty function
	double visit(Liquor&);//empty function
	double visit(Food&);//print its description
	double visit(FirstAid&);//print its description
	PrintVisitor();
	~PrintVisitor();
};

