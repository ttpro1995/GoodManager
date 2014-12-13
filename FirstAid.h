#pragma once
#include "Necessity.h"
#include <string>
using namespace std;
//This source code is avaiable at my github account https://github.com/ttpro1995/GoodManager

class FirstAid :
	public Necessity
{
public:
	string description;

public:
	FirstAid(int,string);
	double accept(Visitor&);
	string getDescription();
	~FirstAid();
};

