#include <iostream>
using namespace std;

int main()
{
	int segundos, minutos;
	cout << "Digite uma quantidade de minutos: ";
	cin >> minutos;
	segundos = 60 * minutos;

	cout << "Existem " << segundos << " segundos em " << minutos;
		
	cout << endl;
	system("pause");
	
	return 0;
}
