#include <iostream>
using namespace std;

int main()
{
	int a, b;

	cout << "Digite dois numeros inteiros: ";
	cin >> a >> b;

	cout << "Quociente " << a << "/" << b << " = " << a/b << endl
		<< "Resto da divisao " << a << "%" << b << " = " << a%b << endl;

	return 0;
}