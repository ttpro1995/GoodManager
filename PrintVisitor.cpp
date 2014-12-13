#include "PrintVisitor.h"
#include <iostream>
using namespace std;

PrintVisitor::PrintVisitor()
{
}


PrintVisitor::~PrintVisitor()
{
}

double ::PrintVisitor::visit(Necessity& good) 
{
	return 0;
}

double ::PrintVisitor::visit(Tobacco& good)
{
	return 0;
}
double ::PrintVisitor::visit(Liquor& good)
{
	return 0;;
}

double ::PrintVisitor::visit(Food& good) 
{
	cout << good.getDescription() << endl;
	return 0;
}

double ::PrintVisitor::visit(FirstAid& good) 
{
	cout << good.getDescription() << endl;
	return 0;
}