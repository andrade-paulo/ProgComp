#include <iostream>
using namespace std;

struct peixe {
	char tipo[20];
	float peso;
	int comprimento;
};

void exibir_peixe(peixe);

void exibir_peixe_pont(peixe*);

int main()
{
	// Cria��o e inicializa��o de uma vari�vel tipo `peixe`
	peixe nemo = { "Peixe-Palhaco", 148.3, 5 };

	exibir_peixe(nemo);

	// Cria��o e inicializa��o de um ponteiro de `nemo`
	peixe * p = &nemo;

	exibir_peixe_pont(p);

	return 0;
}

void exibir_peixe(peixe p) {
	cout << p.tipo << " com " << p.peso << "g e " << p.comprimento << "cm." << endl;
}

void exibir_peixe_pont(peixe* p) {
	cout << p->tipo << " com " << p->peso << "g e " << p->comprimento<< "cm.";
}

