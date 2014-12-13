//Group 9 - APCS 13ctt - a example of visitor 
#include "Necessity.h"
#include <iostream>
using namespace std;
#include "TaxVisitor.h"
#include "TaxHolidayVisitor.h"
#include "Food.h"
int main()
{
	Necessity milk(7000);
	Necessity egg(2000);
	Liquor volka(600000);
	Tobacco baconmeo(20000);
	TaxVisitor tax;
	TaxHolidayVisitor taxholiday;
	cout << "Milk price with no tax = " << milk.getPrice() << endl;
	cout << "Egg price with no tax = " << egg.getPrice() << endl;
	cout << "Volka price with no tax = " << volka.getPrice() << endl;
	cout << "Baconmeo price with no tax = " << baconmeo.getPrice() << endl;

	cout << endl;
	cout << "Price with Tax :\n";
	cout << "Milk " << milk.accept(tax)<<endl;
	cout << "Egg " << egg.accept(tax)<<endl;
	cout << "Volka " << volka.accept(tax)<<endl;
	cout << "Baconmeo " << baconmeo.accept(tax)<<endl;

	cout << endl;

	cout << "Price with tax on Holiday \n";
	cout << "Milk " << milk.accept(taxholiday) << endl;
	cout << "Egg " << egg.accept(taxholiday) << endl;
	cout << "Volka " << volka.accept(taxholiday) << endl;
	cout << "Baconmeo " << baconmeo.accept(taxholiday) << endl;
 

	/*

	What if we don't use accept ?

	Necessity* a;
	a = new Food(10000,"Chocolate");
	tax.visit(*a);//run double visit(Necessity&) overloading
	a->accept(tax);//run double visit(Food&) overloading
	*/
}