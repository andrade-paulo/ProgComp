#include <iostream>
using namespace std;

int main() {
	int hora_partida;
	int minutos_partida;
	int hora_chegada;
	int minutos_chegada;
	int tempo;
	char sep;

	cout << "Digite o horario de partida (HH:MM): ";
	cin >> hora_partida >> sep >> minutos_partida;
	
	cout << "Digite o horario de chegada (HH:MM): ";
	cin >> hora_chegada >> sep >> minutos_chegada;

	tempo = (hora_chegada * 60 + minutos_chegada) - (hora_partida * 60 + minutos_partida);

	cout << "O tempo total de viagem foi " << tempo/60 << " horas e " << tempo%60 << " min.";
}