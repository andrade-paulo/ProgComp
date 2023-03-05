#include <iostream>
#include <climits>
using namespace std;

short int bitsAltos(int);

int main() {
	int valor;

	cout << "Valor inteiro: ";
	cin >> valor;
	
	cout << bitsAltos(valor);
}

short int bitsAltos(int estado) {
	int mascara = ~SHRT_MAX;  // A negação de SHRT_MAX liga os 16 maiores bits de um INT e desliga o restante
	estado = estado & mascara; // Os 16 bits mais baixos serão 0, e os outros mantidos

	return estado >> 16; // Transfere os 16 maiores bits para as 16 primeiras casas
}