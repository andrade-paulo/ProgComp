#include <iostream>
using namespace std;

struct ASCII
{
	char caractere;
	int associado;
};

ASCII* retorna_ascii(char, int);

int main()
{
	char car;
	int ass;

	cout << "Caractere: ";
	cin >> car;
	cout << "Associado: ";
	cin >> ass;

	ASCII* p = retorna_ascii(car, ass);

	delete p;

	return 0;
}

ASCII* retorna_ascii(char c, int a) {
	ASCII* elemento = new ASCII{ c, a };

	return elemento;
}