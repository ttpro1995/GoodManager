//Group 9 - APCS 13ctt - a example of visitor 
#include "Necessity.h"
#include <iostream>
using namespace std;
#include "TaxVisitor.h"
#include "TaxHolidayVisitor.h"
#include "Food.h"
#include "TaxVisitorFactory.h"
#include "PrintVisitor.h"
int main()
{
	Tobacco Tri_Five(30000);//3 so nam
	Liquor volka(600000);
	Tobacco Tri_Cat(20000);// thuoc la ba con meo
	Necessity Cocacola(5000);

	Necessity* Dish1 = new Food(100000,"chicken with lemon leaf eat with sticky rice ");
	Necessity* Dish2 = new Food(30000, "Instant noodle with fish ");
	Necessity* Dish3 = new Food(10000, "Special peanut with pepper ");
	cout << "Is today Holiday ?"
		<< "1. Yes"
		<< "2. No";
	int choice;
	cin >> choice;
	TaxVisitorFactory VisitorFACTORY;
	Visitor* tax = VisitorFACTORY.CreateTaxVisitor(choice);
 

	cout << "----------------------------\n"
		<< "Convenience store \n"
		<< "Tri_Five cigarette     " << Tri_Five.accept(*tax) << endl
		<< "Tri_Cat cigarette     " << Tri_Cat.accept(*tax) << endl
		<< "Cocacola   " << Cocacola.accept(*tax) << endl
		<< "-----------------------------------\n";

	
	
	


	/*

	What if we don't use accept ?

	Necessity* a;
	a = new Food(10000,"Chocolate");
	tax.visit(*a);//run double visit(Necessity&) overloading
	a->accept(tax);//run double visit(Food&) overloading
	*/
}