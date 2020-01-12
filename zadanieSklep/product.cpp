#include "product.h"

#include <iostream>
using namespace std;
product::product()
{
	nameP = "NULL";
	price = 0;
}

product::product(string nazwa, int cena)
{
	nameP = nazwa;
	price = cena;
}

void product::printProduct()
{
	cout << "Nazwa towaru: " << nameP << endl;
	cout << "Cena: " << price << endl;

}
