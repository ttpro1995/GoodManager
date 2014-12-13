#pragma once
#include "Necessity.h"
#include <string>
//This source code is avaiable at my github account https://github.com/ttpro1995/GoodManager
using namespace std;
class Food :
	public Necessity
{
private:
	string description;
public:
	double accept(Visitor&);
	string getDescription();
	Food(int,string);
	~Food();
};

