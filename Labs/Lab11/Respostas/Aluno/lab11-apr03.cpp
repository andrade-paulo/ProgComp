#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main()
{
	char nome[20];
	char data[20];
	char frase[35];

	cout << "Nome: ";
	cin >> nome;
	cout << "Data: ";
	cin >> data;
	
	strcpy(frase, nome); strcat(frase, " esteve aqui em "); strcat(frase, data);

	cout << frase;

	return 0;
}