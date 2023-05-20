#include <iostream>
using namespace std;

enum mes { Jan = 1, Fev, Mar, Abr, Mai, Jun, Jul, Ago, Set, Out, Nov, Dez };

istream& operator>>(istream&, mes&);

ostream& operator<<(ostream&, mes);

int main()
{
	mes inicio, fim;

	inicio = Mar; // inicio do semestre
	fim = Jun; // fim do semestre

	cout << "Digite o numero do mes atual: ";
	mes atual;
	cin >> atual;

	cout << "O mes " << atual << " e ";
	if (atual >= inicio && atual <= fim)
		cout << "periodo de aulas.\n";
	else
		cout << "ferias!\n";
	return 0;
}

istream& operator>>(istream& is, mes& mes_lido) {
	int numero_mes;
	
	is >> numero_mes;
	mes_lido = mes(numero_mes);

	return is;
}

ostream& operator<<(ostream& os, mes mes_exibido) {
	os << int(mes_exibido);

	return os;
}
