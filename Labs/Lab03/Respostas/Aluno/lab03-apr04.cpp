#include <iostream>
using namespace std;

int main() {
	float fabrica;
	cout << "Custo de fabrica: ";
	cin >> fabrica;
	cout << "O custo ao consumidor e de " << fabrica + (fabrica * (0.28 + 0.45)) << endl;
}
