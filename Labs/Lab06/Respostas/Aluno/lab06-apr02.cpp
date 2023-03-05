#include <iostream>
using namespace std;

#define PrecoPao 0.30
#define PrecoPastel 0.25

int main() {
	int paes;
	int pasteis;

	cout << "Quantos paes? ";
	cin >> paes;
	
	cout << "Quantos pasteis? ";
	cin >> pasteis;

	cout << "Preco final: " << paes * PrecoPao + pasteis * PrecoPastel;
}