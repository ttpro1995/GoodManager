#pragma once
//Group 9 - APCS 13ctt - a example of visitor 
//This source code is avaiable at my github account https://github.com/ttpro1995/GoodManager
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

