#include <iostream>
using namespace std;

int main()
{
	int quant;

	cout << "N�mero de linhas: ";
	cin >> quant;

	for (int i = 1; i <= quant; i++) {  // `i` deve come�ar em 1
		for (int j = 0; j < quant - i; j++)  // Crescente
			cout << ".";
		for (int j = 0; j < i; j++)  // Decrescente
			cout << "*";
		cout << "\n";
	}
}