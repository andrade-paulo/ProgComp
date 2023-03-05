#include <iostream>
using namespace std;

string formatar(string, string);

int main()
{
	string h, m;
	
	cout << "Horas: ";
	cin >> h;
	cout << "Minutos: ";
	cin >> m;

	cout << "Agora sao: " << formatar(h, m);
}

string formatar(string hora, string minuto)
{
	string relogio = hora + ":" + minuto;
	return relogio;
}
