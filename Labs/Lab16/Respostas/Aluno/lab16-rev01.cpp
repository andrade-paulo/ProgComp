#include <iostream>
using namespace std;

int main()
{
	int x;

	cout << "Digite um valor: ";
	
	for (cin >> x; x; cin >> x)
		cout << "Digite outro valor: ";
	
	// O programa pede para que o usu�rio digite um valor at� que seja 0

	return 0;
}