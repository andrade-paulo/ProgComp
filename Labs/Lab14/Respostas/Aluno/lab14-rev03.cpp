#include <iostream>
using namespace std;

struct peixe {
	char tipo[20];
	float peso;
	int comprimento;
};

int main()
{
	// Cria��o e inicializa��o de uma vari�vel tipo `peixe`
	peixe nemo = { "Peixe-Palhaco", 0.15, 0.05 };

	// Cria��o e inicializa��o de um ponteiro de `nemo`
	peixe * p = &nemo;

	return 0;
}