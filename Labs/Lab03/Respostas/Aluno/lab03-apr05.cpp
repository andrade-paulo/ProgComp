#include <iostream>
using namespace std;

int main() {
	int hora, minuto;
	char sep;
	cout << "Que horas sao? ";
	cin >> hora >> sep >> minuto;
	cout << "Seu relogio esta atrasado, agora sao " << (hora + 1) << sep << minuto << endl;
}
