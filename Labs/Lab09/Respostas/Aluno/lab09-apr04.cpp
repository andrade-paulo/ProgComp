#include <iostream>
using namespace std;

int main()
{
	int metros;
	int km;
	int resto;

	cout << "Entre com a distancia em metros: ";
	cin >> metros;

	km = metros / 1000;
	resto = metros % 1000;

	cout << metros << " metros equivalem a " << km << " quilometros e " << resto << " metros.";
}