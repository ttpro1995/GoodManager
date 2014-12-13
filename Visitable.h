#pragma once
//Group 9 - APCS 13ctt - a example of visitor 
class Visitor;//prototype

//This source code is avaiable at my github account https://github.com/ttpro1995/GoodManager

class Visitable
{
public:

	 virtual double accept(Visitor&)=0;

};

