#include <iostream>
#include <climits>
using namespace std;

short int bitsBaixos(int);

int main() {
	int valor;

	cout << "Valor inteiro: ";
	cin >> valor;
	
	cout << bitsBaixos(valor);
}

short int bitsBaixos(int estado) {
	short int mascara = SHRT_MAX;  // SHRT_MAX corresponde ao valor m�ximo de 16 bits

	return estado & mascara; // Os 16 bits mais altos ser�o 0 e os outros mantidos
}