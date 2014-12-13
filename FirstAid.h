#pragma once
#include "Necessity.h"
#include <string>
using namespace std;

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

