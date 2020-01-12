#include "man.h"

#include <iostream>
using namespace std;
man::man()
{
	age = 0;
	height = 0;
	sex = "NULL";
	id = "NULL";


}

man::man(int wiek, int wzrost, string plec, string pesel)
{
	age = wiek;
	height = wzrost;
	sex = plec;
	id = pesel;
}

void man::printMan()
{
	cout << "Wiek: " << age << endl;
	cout << "Wzrost: " << height << endl;
	cout << "Plec: " << sex << endl;
	cout << "Pesel: " << id << endl<<endl;
}
