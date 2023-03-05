#include <iostream>
using namespace std;

char codificar(char);
char decodificar(char);

int main() {
	char letra, codificado;
	
	cout << "Informe um caractere: ";
	cin >> letra;
	codificado = codificar(letra);

	cout << "Codificado: " << codificado << endl;
	cout << "Decodificado: " << decodificar(codificado) << endl;
}

char codificar(char caractere) {
	return caractere + 3;
}

char decodificar(char caractere) {
	return caractere - 3;
}