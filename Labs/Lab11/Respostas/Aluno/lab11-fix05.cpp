#include <iostream>
#include <string>
using namespace std;

char ultima_letra(char[]);

int main()
{
	char palavra[20];

	cout << "Digite uma palavra: ";
	cin >> palavra;

	cout << ultima_letra(palavra);

	return 0;
}

char ultima_letra(char palav[]) {
	return palav[strlen(palav)-1]; // A posição com índice strlen() é sempre '\0'
}