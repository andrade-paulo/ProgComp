#include <iostream>
using namespace std;

bool testarBit(unsigned char, int);
void exibirBits(unsigned char);

int main() {
	int num;

	cout << "Informe um numero (0 a 255): ";
	cin >> num;

	cout << "Bits: ";
	exibirBits(num);
}

bool testarBit(unsigned char estado, int bit) {
	unsigned char mascara = 1 << bit;

	return estado & mascara;
}

void exibirBits(unsigned char numero) {
	for (int i = 7; i >= 0; i--) {
		cout << testarBit(numero, i);
	}
}