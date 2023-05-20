#include <iostream>
using namespace std;

struct Local
{
	char nome[20];
	char pais[20];
	char continente[10];
};

int main()
{
	int num;

	cout << "Quantidade de locais: ";
	cin >> num;

	Local* ferias = new Local[num];

	cout << "Resgistre os pontos de parada\n";
	for (int i = 0; i < num; i++) {
		cout << "Destino " << i + 1 << ": ";
		cin >> ferias[i].nome >> ferias[i].pais >> ferias[i].continente;
	}

	for (int i = 0; i < num; i++) {
		cout << "\nDestino: " << i + 1 << ": ";
		cout << ferias[i].nome << " - " << ferias[i].pais << ", " << ferias[i].continente;
	}

	delete[] ferias;

	return 0;
}