#include <iostream>
using namespace std;

void exibir_5(int[]);

void exibir_geral(int[], int);

int main()
{
	int vetor[] = { 15, 29, 48, 10, 35 };
	
	exibir_5(vetor);
	
	int vetor2[] = { 15, 29, 48, 10, 35, 43, 99, 102 };
	int tamanho = sizeof(vetor2) / sizeof(int);

	exibir_geral(vetor2, tamanho);
	
	return 0;
}

void exibir_5(int vet[]) {
	for (int i = 0; i < 5; i++)
		cout << vet[i] << " ";
	cout << endl;
}

void exibir_geral(int vet[], int tam) {
	for (int i = 0; i < tam; i++)
		cout << vet[i] << " ";
	cout << endl;
}
