#pragma once
//Group 9 - APCS 13ctt - a example of visitor 
class Visitor;//prototype



class Visitable
{
public:

	 virtual double accept(Visitor&)=0;

};

