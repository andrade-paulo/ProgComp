#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul"); // Acentos e cedilha

	// Cabecalho
	cout << left; cout.width(14); cout << "Produto";
	cout.width(12); cout << "Preço/Kg";
	cout.width(15); cout << "Pedido(Kg)";
	cout << "Total Parcial" << endl;

	cout << left; cout.width(14); cout << "----------";
	cout.width(12); cout << "--------";
	cout.width(15); cout << "-----------";
	cout << "----------------" << endl;

	// Itens
	cout << left; cout.width(14); cout << "Alface";
	cout.width(12); cout << "R$1,25/Kg";
	cout.width(15); cout << "3,2Kg";
	cout << "R$4,00" << endl;

	cout << left; cout.width(14); cout << "Beterraba";
	cout.width(12); cout << "R$0,65/Kg";
	cout.width(15); cout << "6,0Kg";
	cout << "R$3,90" << endl;

	cout << left; cout.width(14); cout << "Cenoura";
	cout.width(12); cout << "R$0,90/Kg";
	cout.width(15); cout << "10Kg";
	cout << "R$9,00" << endl;
}