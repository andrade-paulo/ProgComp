#include <iostream>
using namespace std;

int main()
{
	// extrapola o número de dígitos significativos da mantissa
	float f1 = 24980154.845f;

	// extrapola o maior expoente possível
	//float f2 = 2e40f;
	
	// extrapola o número de dígitos significativos da mantissa
	double d1 = 293849384958473847.394;
	
	// extrapola o maior expoente possível
	//double d2 = 2e315;

	cout << fixed;
	cout << "f1: " << f1 << endl
		//<< "f2: " << f2 << endl
		<< "d1: " << d1 << endl;
		//<< "d2: " << d2 << endl;

	return 0;
}