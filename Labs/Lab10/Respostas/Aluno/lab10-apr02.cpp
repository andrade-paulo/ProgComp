#include <iostream>
using namespace std;

int main()
{
	int pesos[3] = { 2, 3, 4 };
	float notas[3];

	cout << "Notas: ";
	cin >> notas[0] >> notas[1] >> notas[2];
	
	cout << "Sistema novo: " << (notas[0] * pesos[0] + notas[1] * pesos[1] + notas[2] * pesos[2]) / 9 << endl;
	cout << "Sistema antigo: " << (notas[0] + notas[1] + notas[2]) / 3;
	
	return 0;
}