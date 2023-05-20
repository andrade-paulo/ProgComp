#include <iostream>
using namespace std;

int main()
{
	char ch[30], * p;
	int letras = 0;

	cout << "Digite jogador/time: ";
	cin >> ch;

	for (int i = 0; ch[i] != '/'; i++)
		letras++;

	p = &ch[letras + 1];

	cout << "O nome do jogador tem " << letras << " letras" << endl;
	cout << "O seu time e " << p;

	return 0;
}
