#include <iostream>
#include <cmath>
using namespace std;

int Absoluto(int numero);

int main() {
	int num;
	
	cout << "Digite um valor inteiro: ";
	cin >> num;

	cout << "Valor absoluto: " << Absoluto(num);
}

int Absoluto(int numero) {
	int abs;

	abs = sqrt(pow(numero, 2));

	return abs;
}