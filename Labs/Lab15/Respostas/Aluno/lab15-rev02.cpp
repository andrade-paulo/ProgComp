#include <iostream>
using namespace std;

struct peixe
{
	char tipo[20];
	float peso;
	unsigned comp;
};

int main()
{
	// Variável
	peixe peixe1 = { "Piaba", 6.7, 8 };

	// Alocação dinâmica
	peixe * p = new peixe { "Diaba", 5.2, 9 };

	cout << peixe1.tipo << endl;
	cout << p->tipo << endl;
	delete p;

	return 0;
}