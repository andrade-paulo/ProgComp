#include <iostream>
using namespace std;

int main()
{
	float jogador1;
	float jogador2;
	float total;
	unsigned int premio;

	cout << "Digite a quantia apostada pelo jogador 1: ";
	cin >> jogador1;

	cout << "Digite a quantia apostada pelo jogador 2: ";
	cin >> jogador2;

	cout << "Entre com o valor do premio: ";
	cin >> premio;

	total = (jogador1 + jogador2);

	cout << fixed;
	cout.precision(0);
	cout << "O jogador 1 tem direito a " << premio * (jogador1 / total) << endl
		<< "O jogador 2 tem direito a " << premio * (jogador2 / total) << endl;

	return 0;
}