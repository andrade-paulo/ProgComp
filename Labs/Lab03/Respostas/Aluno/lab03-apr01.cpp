#include <iostream>
using namespace std;

int main() {
	float anos, cigarros, preco;
	cout << "Ha quantos anos voce fuma? ";
	cin >> anos;
	cout << "Quantos cigarros por dia? ";
	cin >> cigarros;
	cout << "Qual o preco de uma carteira com 20 cigarros? R$";
	cin >> preco;

	cout << "Voce ja gastou R$" << anos * 365 * cigarros / 20 * preco << " com cigarros";
}
