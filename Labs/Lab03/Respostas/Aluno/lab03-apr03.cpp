#include <iostream>
using namespace std;

int main() {
	float peso, calorias, corrida, ciclismo, natacao, minutos;
	char sep;

	cout << "Digite seu peso em quilos: ";
	cin >> peso;
	cout << "Digite o tempo de corrida: ";
	cin >> corrida >> sep >> minutos >> sep;
	corrida = corrida * 60 + minutos;
	cout << "Digite o tempo de ciclismo: ";
	cin >> ciclismo >> sep >> minutos >> sep;
	ciclismo = ciclismo * 60 + minutos;
	cout << "Digite o tempo de natacao : ";
	cin >> natacao >> sep >> minutos >> sep;
	natacao = natacao * 60 + minutos;

	calorias = (7 * peso * (corrida / 60)) + (7 * peso * (ciclismo / 60)) + (8 * peso * (natacao / 60));
	cout << "Voce gastou um total de " << calorias << " calorias";
}
