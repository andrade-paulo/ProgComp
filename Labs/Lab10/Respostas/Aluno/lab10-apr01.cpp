#include <iostream>
using namespace std;

int main()
{
	int vetores[5] = { 10, 20, 30, 40, 50};
	short posicao;
	short valor;

	cout << "Vetor: " << vetores[0] << ", " << vetores[1] << ", " << vetores[2] << ", " << vetores[3] << ", " << vetores[4] << endl;
	cout << "-----------------------" << endl;
	cout << "Alterar posicao: ";
	cin >> posicao;
	cout << "Novo valor: ";
	cin >> valor;
	vetores[posicao] = valor;
	cout << "-----------------------" << endl;
	cout << "Vetor: " << vetores[0] << ", " << vetores[1] << ", " << vetores[2] << ", " << vetores[3] << ", " << vetores[4] << endl;

	return 0;
}