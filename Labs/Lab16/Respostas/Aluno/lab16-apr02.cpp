#include <iostream>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	char palavra1[10], palavra2[10], palavra3[10], palavra4[10];
	int tamanho1 = 0, tamanho2 = 0, tamanho3 = 0, tamanho4 = 0;

	cout << "Digite 4 palavras: ";
	cin >> palavra1 >> palavra2 >> palavra3 >> palavra4;

	// Contagem do espa�o necess�rio
	for (int i = 0; palavra1[i]; i++)
		tamanho1++;

	for (int i = 0; palavra2[i]; i++)
		tamanho2++;

	for (int i = 0; palavra3[i]; i++)
		tamanho3++;
	
	for (int i = 0; palavra4[i]; i++)
		tamanho4++;
	
	int tamanho_total = tamanho1 + tamanho2 + tamanho3 + tamanho4 + 4; // Adi��o dos espa�os e \0

	// String com aloca��o din�mica
	char * frase = new char[tamanho_total];

	// Concatena��o das palavras
	for (int i = 0; palavra1[i]; i++)
		frase[i] = palavra1[i];
	frase[tamanho1] = ' '; // Adia��o do espa�o

	for (int i = 0; palavra2[i]; i++)
		frase[i+tamanho1+1] = palavra2[i]; // O �ndice soma com o tamanho da palavra anterior e espa�os
	frase[tamanho1 + tamanho2 + 1] = ' ';

	for (int i = 0; palavra3[i]; i++)
		frase[i + tamanho1 + tamanho2 + 2] = palavra3[i];
	frase[tamanho1 + tamanho2 + tamanho3 + 2] = ' ';

	for (int i = 0; palavra4[i]; i++)
		frase[i + tamanho1 + tamanho2 + tamanho3 + 3] = palavra4[i];
	frase[tamanho1 + tamanho2 + tamanho3 + tamanho4 + 3] = '\0'; // Adi��o do \0

	cout << "\nConcatenando as palavras temos: \n" << frase;
	
	delete[] frase;

	return 0;
}
