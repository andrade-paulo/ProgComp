#include <iostream>
using namespace std;

struct carro
{
	char modelo[20];
	short ano;
	float preco;
};

int main()
{
	carro garagem[10] = { {"Vectra", 2009, 58000}, {"Polo", 2008, 45000} };

	carro* p = &garagem[1];

	cout << "Modelo: " << p->modelo << endl;
	cout << "Ano: " << p->ano << endl;
	cout << "Preco: " << p->preco << endl;

	return 0;
}