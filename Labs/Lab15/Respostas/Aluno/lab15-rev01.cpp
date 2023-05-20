#include <iostream>
using namespace std;

int main()
{
	int tam;

	cout << "Digite o tamanho do vetor: ";
	cin >> tam;

	cout << "Inicializando vetor para " << tam << " inteiros \n";
	int* vetor = new int [tam];
	delete [] vetor;

	return 0;
}