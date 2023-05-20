#include <iostream>
using namespace std;

void Mais(int*);

int Incrementa(int);

int main()
{
	int x, * p = &x;

	cout << "Digite um valor: ";
	cin >> x;

	Mais(p);

	cout << "Mais: " << *p << endl << "Incrementa: " << Incrementa(x);

	return 0;
}

void Mais(int* p) {
	*p += 1;
}

int Incrementa(int x) {
	x++;

	return x;
}
