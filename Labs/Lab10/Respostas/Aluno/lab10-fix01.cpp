#include <iostream>
using namespace std;

int main()
{
	float precos[3] = { 1.5f, 2.0f, 1.0f };
	float quant[3];

	cout << "Digite a quantidade de quilos desejados: \n";
	cout << "Alface: ";
	cin >> quant[0];
	cout << "Beterraba: ";
	cin >> quant[1];
	cout << "Cenoura: ";
	cin >> quant[2];

	float alface = quant[0] * precos[0];
	float beterraba = quant[1] * precos[1];
	float cenoura = quant[2] * precos[2];

	cout << "\nResumo da Compra: \n";
	cout << "----------------------------\n";
	cout << "Alface: R$" << alface << endl;
	cout << "Beterraba: R$" << beterraba << endl;
	cout << "Cenoura: R$" << cenoura << endl;
	cout << "----------------------------\n";
	cout << "Total: R$" << alface + beterraba + cenoura << endl;

	return 0;
}