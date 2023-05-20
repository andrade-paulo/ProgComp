#include <iostream>
using namespace std;

int main()
{
	double litros = 3.14;
	double* p = &litros;

	cout << "O valor de litros e: " << *p;

	return 0;
}