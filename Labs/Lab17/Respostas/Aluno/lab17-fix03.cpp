#include <iostream>
using namespace std;

int main()
{
	int t;

	cout << "Tamanho da palavra: ";
	cin >> t;

	char * palavra = new char [t+1];  // +1 devido ao \0
	char * inversa = new char [t+1];
	
	cout << "Digite um palavra: ";
	cin >> palavra;
	
	// Inversão da palavra
	inversa[t] = palavra[t];  // Adição do \0
	for (int i = 0; i <= t-1; i++) {
		inversa[i] = palavra[(t-1)-i];  // t - 1 desconsidera o \0  
	}

	cout << "Palavra inversa: " << inversa << endl;

	if (strcmp(palavra, inversa))
		cout << "A palavra nao e um palindromo\n";
	else
		cout << "A palavra e um palindromo\n";

	delete[] palavra;
	delete[] inversa;
}