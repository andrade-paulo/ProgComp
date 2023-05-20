#include <iostream>
using namespace std;

union cores {
	char nome[10];
	short numero;
	char codigo[4];
};

struct carro {
	char modelo[20];
	short ano;
	cores cor;
	int preco;
};

int main() {
	carro garagem[10] = {{"Vectra", 2009, "Azul", 58000}, {"Polo", 2008, "Preto", 45000}};

	cout << "Registre um carro novo\n";
	cout << "Modelo: ";
	cin >> garagem[2].modelo;
	cout << "Ano: ";
	cin >> garagem[2].ano;
	cout << "Cor: ";
	cin >> garagem[2].cor.nome;
	cout << "Preco: ";
	cin >> garagem[2].preco;

	cout << "\nGaragem:\n";
	cout << garagem[0].modelo << "\t";
	cout << garagem[0].ano << "\t";
	cout << garagem[0].cor.nome << "\t";
	cout << garagem[0].preco << endl;

	cout << garagem[1].modelo << "\t";
	cout << garagem[1].ano << "\t";
	cout << garagem[1].cor.nome << "\t";
	cout << garagem[1].preco << endl;

	cout << garagem[2].modelo << "\t";
	cout << garagem[2].ano << "\t";
	cout << garagem[2].cor.nome << "\t";
	cout << garagem[2].preco << endl;
}