#include "man.h"
#include "male.h"
#include <iostream>

using namespace std;
male::male()
{
	age = 0;
	height = 0;
	sex = "NULL";
	id = "NULL";
	name = "NULL";
	surname = "NULL";
}

male::male(int wiek, int wzrost, string plec, string pesel, string imie , string nazwisko)
{
	age = wiek;
	height = wzrost;
	sex = plec;
	id = pesel;
	name = imie;
	surname = nazwisko;
}

void male::printMale()
{
	cout << "Wiek: " << age << endl;
	cout << "Wzrost: " << height << endl;
	cout << "Plec: " << sex << endl;
	cout << "Pesel: " << id << endl;
	cout << "Imie: " << name << endl;
	cout << "Nazwisko: " << surname << endl<<endl;

}