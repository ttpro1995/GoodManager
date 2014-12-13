#pragma once
#include "Visitor.h"
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

