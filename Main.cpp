//Group 9 - APCS 13ctt - a example of visitor 
//This source code is avaiable at my github account https://github.com/ttpro1995/GoodManager
#include "Necessity.h"
#include <iostream>
using namespace std;
#include "TaxVisitor.h"
#include "TaxHolidayVisitor.h"
#include "Food.h"
#include "TaxVisitorFactory.h"
#include "PrintVisitor.h"
#include <vector>
int main()
{
	cout << "Is today Holiday ?\n"
		<< "1. Yes\n"//it is Holiday, so thing is cheaper
		<< "0. No\n";// it is not holiday
	int choice;
	cin >> choice;
	TaxVisitorFactory VisitorFACTORY;//it decide if it is TaxVisitor or TaxHolidayVisitor
	 Visitor* tax = VisitorFACTORY.CreateTaxVisitor(choice);


	Tobacco Tri_Five(30000);//3 so nam
	Liquor volka(600000);
	Tobacco Tri_Cat(20000);// thuoc la ba con meo
	Necessity Cocacola(5000);
	PrintVisitor printer;

	vector<Necessity*> Dish;
	Dish.resize(3);
	Dish[0] = new Food(100000, "chicken with lemon leaf eat with sticky rice ");
	Dish[1] = new Food(30000, "Instant noodle with fish ");
	 Dish[2] = new Food(10000, "Special peanut with pepper ");




 

	cout << "----------------------------\n"
		<< "Convenience store \n"
		<< "Tri_Five cigarette     " << Tri_Five.accept(*tax) << endl
		<< "Tri_Cat cigarette     " << Tri_Cat.accept(*tax) << endl
		<< "Cocacola   " << Cocacola.accept(*tax) << endl
		<< "-----------------------------------\n";


	cout << "----------------------------\n";
	cout << "Restaurant \n";
	vector<Necessity*>::iterator DishIterator;//iterator in STL
	for (DishIterator = Dish.begin(); DishIterator != Dish.end(); DishIterator++){
		(*DishIterator)->accept(printer);
		cout<<"   "<<(*DishIterator)->accept(*tax)<<endl;
	}
	cout << "----------------------------\n";
		
	
	


	/*

	What if we don't use accept ?

	Necessity* a;
	a = new Food(10000,"Chocolate");
	tax.visit(*a);//run double visit(Necessity&) overloading
	a->accept(tax);//run double visit(Food&) overloading
	*/
}