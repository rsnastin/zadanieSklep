#pragma once
#include <string>
#include <vector>
#include "man.h"
#include "product.h"

using namespace std;
class female : public man
{
protected:
	string name;
	string surname;
public:
	female();
	female(int, int, string, string, string, string);
	vector<product> Basket;
	void printFemale();
};