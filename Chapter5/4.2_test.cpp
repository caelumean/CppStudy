#include <iostream>
#include "4.2_MyConstant.h"

extern int num1 = 43;

void dooSomething()
{
	using namespace std;
	cout << "Hello" << endl;
	cout << "In test.cpp file " << Constants::pi << " "<< &Constants::pi<< endl;

}