#include <iostream>
using namespace std;

int main()
{
	char prim[10];
	char seg[10];

	cout << "Primeiro nome? ";
	cin >> prim;
	cout << "Segundo nome ? ";
	cin >> seg;
	cout << "Bom dia, " << prim << " " << seg << endl << "Seja bem vindo " << prim[0] << seg[0];

	return 0;
}