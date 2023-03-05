#include <iostream>
using namespace std;

int main()
{
	int a, b, c;

	a = 1 + 2; // linha 1
	b = 1 + a; // linha 2
	c = 1 % 5; // linha 3
	a = a + 2; // linha 4
	b = a - c; // linha 5
	b = 5 * c / 2; // linha 6

	return 0;
}