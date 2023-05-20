#include <iostream>
using namespace std;

int main()
{
	int x;

	cout << "Digite um valor: ";
	
	for (cin >> x; x; cin >> x)
		cout << "Digite outro valor: ";
	
	// O programa pede para que o usuário digite um valor até que seja 0

	return 0;
}