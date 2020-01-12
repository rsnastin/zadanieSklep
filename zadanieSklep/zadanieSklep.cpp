#include <iostream>
#include "man.h"
#include "male.h"
#include "female.h"
#include "product.h"
#include "vproducts.h"

using namespace std;
int main()
{
	male facet(18, 180, "Male", "02090806147", "Krzysztof" , "Nowak");
	facet.printMale();

	female kobieta(20, 165, "Female", "00090806145", "Anna", "Kowalska");
	kobieta.printFemale();


	product mleko("mleko", 5);
	VProducts.push_back(mleko);
	product energetyk("energetyk", 2);
	VProducts.push_back(energetyk);
	product kawa("kawa", 20);
	VProducts.push_back(kawa);
	product czekoladki("czekoladki", 20);
	VProducts.push_back(czekoladki);
	product milka("milka", 12);
	VProducts.push_back(milka);
	product kielbasa("kielbasa", 20);
	VProducts.push_back(kielbasa);
	product maslo("maslo", 5);
	VProducts.push_back(maslo);
	product bulka("bulka", 1);
	VProducts.push_back(bulka);
	product pasztet("pasztet", 3);
	VProducts.push_back(pasztet);
	product bilet("bilet", 2);
	VProducts.push_back(bilet);
	product zupka("zupka", 2);
	VProducts.push_back(zupka);

	vector<product>::iterator it;

	for (it = VProducts.begin(); it != VProducts.end(); it++)
	{
		it->printProduct();
	}	

	cout << endl;



}