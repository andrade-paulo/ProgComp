#include <iostream>
using namespace std;

int main()
{
	float x;

	cout << "Ponto Flutuante: ";
	cin >> x;

	cout << "Notacao padrao: " << x << endl;

	cout << scientific;
	cout << "Notacao cientifica: " << x << endl;

	cout << fixed;
	cout.precision(2);
	cout << "Notacao decimal: " << x << endl;

	return 0;
}