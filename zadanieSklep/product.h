#pragma once
#include <string>


using namespace std;
class product
{
protected:
	string nameP;
	int price;

public:
	product();
	product(string, int);
	void printProduct();
};
