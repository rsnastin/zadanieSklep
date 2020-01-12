#include "man.h"
#include "female.h"
#include <iostream>

using namespace std;
female::female()
{
	age = 0;
	height = 0;
	sex = "NULL";
	id = "NULL";
	name = "NULL";
	surname = "NULL";
}

female::female(int wiek, int wzrost, string plec, string pesel, string imie, string nazwisko)
{
	age = wiek;
	height = wzrost;
	sex = plec;
	id = pesel;
	name = imie;
	surname = nazwisko;
}

void female::printFemale()
{
	cout << "Wiek: " << age << endl;
	cout << "Wzrost: " << height << endl;
	cout << "Plec: " << sex << endl;
	cout << "Pesel: " << id << endl;
	cout << "Imie: " << name << endl;
	cout << "Nazwisko: " << surname << endl << endl;

}