#include <iostream>
using namespace std;

long double calculo(double[]);

int main()
{
	double vet[3];

	cout << "Digite 3 doubles: ";
	cin >> vet[0] >> vet[1] >> vet[2];
	
	cout << vet[0] << " * " << vet[2] << " - " << vet[1] << " = " << calculo(vet) << endl;
	
	return 0;
}

long double calculo(double vetor[]) {
	return vetor[0] * vetor[2] - vetor[1];
}
