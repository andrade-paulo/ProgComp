#include <iostream>
using namespace std;

int main()
{
	const char * meses[12] = 
	{
		"Janeiro",
		"Fevereiro",
		"Marco",
		"Abril",
		"Maio",
		"Junho",
		"Julho",
		"Agosto",
		"Setembro",
		"Outubro",
		"Novembro",
		"Dezembro"
	};

	unsigned total=0;
	unsigned valor_mes;
	
	for (int i = 0; i < 12; i++) 
	{
		cout << "Livros vendidos em " << meses[i] << ": ";
		cin >> valor_mes;
		total += valor_mes;
	}
	
	cout << "\nForam vendidos " << total << " livros no ano";

	return 0;
}