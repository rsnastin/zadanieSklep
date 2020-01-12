#pragma once
#include <string>


using namespace std;
class man
{
protected:
	int age;
	int height;
	string sex;
	string id;

public:
	
	man();
	man(int, int , string, string);
	void printMan();
};
