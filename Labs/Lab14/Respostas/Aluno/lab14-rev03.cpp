#include <iostream>
using namespace std;

struct peixe {
	char tipo[20];
	float peso;
	int comprimento;
};

int main()
{
	// Criação e inicialização de uma variável tipo `peixe`
	peixe nemo = { "Peixe-Palhaco", 0.15, 0.05 };

	// Criação e inicialização de um ponteiro de `nemo`
	peixe * p = &nemo;

	return 0;
}