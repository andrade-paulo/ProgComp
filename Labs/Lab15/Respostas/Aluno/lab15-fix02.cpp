#include <iostream>
using namespace std;

struct balao
{
	float diametro; // diâmetro em metros
	char marca[20]; // nome da marca
	int modelo; // número do modelo
};

int main()
{
	balao* b = new balao;

	cout << "Diametro: ";
	cin >> b->diametro;
	cout << "Marca: ";
	cin >> b->marca;
	cout << "Modelo: ";
	cin >> b->modelo;

	cout << "\nO balao numero " << b->modelo 
		<< " (" << b->marca << ") " 
		<< "tem " << b->diametro << "m de diametro, ";
	
	delete b;

	return 0;
}