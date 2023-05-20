#include <iostream>
using namespace std;

struct peixe
{
	char tipo[20];
	float peso;
	unsigned comp;
};

void mostrar_primeiro(peixe*);

int main()
{
	peixe * p = new peixe[3];

	p[0] = { "Piaba", 6.8, 8 };
	p[1] = { "Peixe2", 12.9, 15 };
	p[2] = { "Peixe3", 4.2, 3 };

	mostrar_primeiro(p);

	delete [] p;

	return 0;
}

void mostrar_primeiro(peixe* pont) {
	cout << "Tipo: " << pont[0].tipo << endl;
	cout << "Peso: " << pont[0].peso << endl;
	cout << "Comprimento: " << pont[0].comp << endl;
}
