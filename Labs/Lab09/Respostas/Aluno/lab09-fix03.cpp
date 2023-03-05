#include <iostream>
using namespace std;

int main()
{
	unsigned int num;
	unsigned int resto;

	const short horas_por_dia = 24;
	const short minutos_por_hora = 60;
	const short segundos_por_minuto = 60;

	cout << "Entre com um número em segundos: ";
	cin >> num;

	short dias = num / (segundos_por_minuto * minutos_por_hora * horas_por_dia);
	resto = num % (segundos_por_minuto * minutos_por_hora * horas_por_dia);

	short horas = resto / (segundos_por_minuto * minutos_por_hora);
	resto = resto % (segundos_por_minuto * minutos_por_hora);

	short minutos = resto / segundos_por_minuto;
	resto = resto % segundos_por_minuto;

	cout << num << " segundos = "
		<< dias << " dias, "
		<< horas << " horas, "
		<< minutos << " minutos e "
		<< resto << " segundos.";

	return 0;
}