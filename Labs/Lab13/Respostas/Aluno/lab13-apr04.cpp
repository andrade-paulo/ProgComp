#include <iostream>
using namespace std;

enum dia { DOM, SEG, TER, QUA, QUI, SEX, SAB };

int main()
{
	char semana[7][10] = { "Domingo", "Segunda", "Terca", "Quarta", "Quinta", "Sexta", "Sabado"};

	for (dia hoje = DOM; hoje <= SAB; hoje = dia(hoje + 1))
		cout << semana[hoje] << endl;

	return 0;
}
