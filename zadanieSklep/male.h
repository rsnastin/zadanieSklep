#pragma once
#include <string>
#include <vector>
#include "man.h"
#include "product.h"

using namespace std;
class male : public man
{
protected:
	string name;
	string surname;
public:
	male();
	male(int, int, string, string, string, string);
	vector<product> Basket;
	void printMale();
};