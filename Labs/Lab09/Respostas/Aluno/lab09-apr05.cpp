#include <iostream>
using namespace std;

int main()
{
	double x1 = 245.795;
	int x2 = x1;

	x1 = x1 * 100;
	x2 = x2 * 100;

	cout << "x1: " << x1 << endl << "x2: " << x2 << endl;
}