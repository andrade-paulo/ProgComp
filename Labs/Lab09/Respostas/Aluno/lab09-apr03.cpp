#include <iostream>
using namespace std;

int main()
{
	float num;

	cout << "Digite um numero real: ";
	cin >> num;

	cout << "Parte inteira: " << (int) num << endl
		<< "Parte fracionaria: " << num - (int) num << endl;
}