#include <iostream>
using namespace std;

struct evento
{
	short dia, mes, ano; 
	short hora, min; 
	char descricao[18];
};

int main() {
	evento caderno[2];
	char sep;

	cout << "Registre 2 eventos:\n";

	cout << "#1\n";
	cout << "Data: "; cin >> caderno[0].dia; cin >> caderno[0].mes; cin >> caderno[0].ano;
	cout << "Hora: "; cin >> caderno[0].hora >> sep >> caderno[0].min; cin.ignore(1);
	cout << "Descricao: "; cin.getline(caderno[0].descricao, 18);

	cout << "\n#2\n";
	cout << "Data: "; cin >> caderno[1].dia; cin >> caderno[1].mes; cin >> caderno[1].ano;
	cout << "Hora: "; cin >> caderno[1].hora >> sep >> caderno[1].min; cin.ignore(1);
	cout << "Descricao: "; cin.getline(caderno[1].descricao, 18);

	cout << "---------------------\n";
	cout << "Eventos Cadastrados\n";

	cout << caderno[0].dia << "/" << caderno[0].mes << "/" << caderno[0].ano << " ";
	cout << caderno[0].hora << ":" << caderno[0].min << " ";
	cout << caderno[0].descricao << " " << endl;

	cout << caderno[1].dia << "/" << caderno[1].mes << "/" << caderno[1].ano << " ";
	cout << caderno[1].hora << ":" << caderno[1].min << " ";
	cout << caderno[1].descricao << " " << endl;
}
