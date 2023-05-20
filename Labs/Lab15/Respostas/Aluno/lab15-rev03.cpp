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
	int num;

	cout << "Quantidade de peixes: ";
	cin >> num;

	cout << endl;

	// Alocação dinâmica
	peixe * p = new peixe[num];

	cout << "Tipo: ";
	cin >> p[1].tipo;
	cout << "Peso: ";
	cin >> p[1].peso;
	cout << "Comprimento: ";
	cin >> p[1].comp;

	cout << endl;

	cout << "O peso do peixe e " << p[1].peso << " gramas";
	delete [] p;

	return 0;
}