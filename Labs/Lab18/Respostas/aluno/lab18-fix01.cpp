#include <iostream>
using namespace std;

int main()
{
	int i, soma = 0;

	cout << "Digite numero inteiros (0 para finalizar): " << endl;
	
	do {
		cin >> i;
		soma += i;
		cout << "Soma parcial: " << soma << endl;
	} while (i);  // 0 = False
}