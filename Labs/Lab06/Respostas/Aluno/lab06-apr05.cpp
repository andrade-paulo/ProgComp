#include <iostream>
#include <climits>
using namespace std;

bool isShort(int);
bool isInt(long long);

int main()
{
	long long num;

	cout << "Digite um valor inteiro: ";
	cin >> num;

	if (isShort(num))
		cout << num << " cabe em 16 bits" << endl;
	else
		cout << num << " nao cabe em 16 bits" << endl;

	if (isInt(num))
		cout << num << " cabe em 32 bits" << endl;
	else
		cout << num << " nao cabe em 32 bits" << endl;

	return 0;
}

bool isShort(int valor) {
	if (valor <= SHRT_MAX)
		return true;
	else
		return false;
}

bool isInt(long long valor) {
	if (valor <= INT_MAX)
		return true;
	else
		return false;
}