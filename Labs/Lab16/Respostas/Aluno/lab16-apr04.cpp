#include <iostream>
using namespace std;

int main()
{
	int * p1, * p2;

	int B[] = { 32, 16, 47, 10, 82, 29, 30, 28, 15, 64 };
	int tam = sizeof(B) / sizeof(int);

	for (int i = 0; i < tam/2; i++)
		cout << "[" << B[i] << "," << B[tam-1-i] << "] ";

	return 0;
}
