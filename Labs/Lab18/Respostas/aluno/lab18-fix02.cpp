#include <iostream>
using namespace std;

int main()
{
	int i;
	int soma = 0, cont = 0;

	cout << "Digite numero inteiros (0 para finalizar): " << endl;
	
	do {
		cin >> i;
		soma += i;
		cont++;
	} while (i);  // 0 = False
	cont--;  // Retirada do 0

	cout << "Foram lidos " << cont << " numeros" << endl;
	cout << "Soma: " << soma << endl;
	cout << "Média: " << float(soma) / float(cont) << endl;
}