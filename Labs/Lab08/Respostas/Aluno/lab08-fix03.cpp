#include <iostream>
using namespace std;
#define segundos_no_ano	3.167E7

double calcular_segundos(short);

int main()
{
	short idade;

	cout << "Digite sua idade: ";
	cin >> idade;

	cout.setf(ios_base::fixed);
	cout.precision(1);
	cout << idade << " anos correspondem a: " << calcular_segundos(idade) << endl;

	return 0;
}

double calcular_segundos(short i) {
	return i * segundos_no_ano;
}