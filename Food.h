#pragma once
#include "Necessity.h"
#include <string>
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

