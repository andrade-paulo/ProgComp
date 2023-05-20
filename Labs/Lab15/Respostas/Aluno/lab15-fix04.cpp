#include <iostream>
using namespace std;

struct carro
{
	char modelo[20];
	short ano;
	float preco;
};

void valor_total(carro*);

int main()
{
	carro* garagem = new carro[10];
	
	// {"Vectra", 2009, 58000}, {"Polo", 2008, 45000}

	cout << "Entre com 2 carros: \n";
	cin >> garagem[0].modelo >> garagem[0].ano >> garagem[0].preco;
	cin >> garagem[1].modelo >> garagem[1].ano >> garagem[1].preco;
	
	valor_total(garagem);

	delete[] garagem;

	return 0;
}

void valor_total(carro* p) {
	cout << "Valor total da garagem: " << p[0].preco + p[1].preco << endl;
}