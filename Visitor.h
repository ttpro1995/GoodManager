#pragma once
//Group 9 - APCS 13ctt - a example of visitor 
#include "Necessity.h"
#include "Tobacco.h"
#include "Liquor.h"
#include "Food.h"
#include "FirstAid.h"
class Visitor
{
public:

	virtual double visit(Necessity&)=0;
	virtual double visit(Tobacco&) = 0;
	virtual double visit(Liquor&) = 0;
	virtual double visit(Food&) = 0;
	virtual double visit(FirstAid&) = 0;
};

