#include <iostream>
using namespace std;

int main()
{
	char nome[40];
	char conceito;

	cout << "Nome: ";
	cin.getline(nome, 40);
	cout << "Que conceito voce merece? ";
	cin >> conceito;

	cout << "Bom dia, " << nome << ", seu conceito e " << char(conceito + 1) << endl;

	return 0;
}