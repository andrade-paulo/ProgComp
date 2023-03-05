#include <iostream>
using namespace std;

char codificar(char);
char decodificar(char);

int main() {
	char letra, codificado;
	bool resposta;

	cout << "Informe um caractere: ";
	cin >> letra;
	cout << "Codificar (1) / Decodificar (0): ";
	cin >> resposta;
	
	if (resposta == true)
		cout << codificar(letra);
	else
		cout << decodificar(letra);
}

char codificar(char caractere) {
	return caractere + 3;
}

char decodificar(char caractere) {
	return caractere - 3;
}