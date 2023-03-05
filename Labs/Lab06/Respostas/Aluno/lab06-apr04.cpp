#include <iostream>
using namespace std;

long long calculo(long long, long long);

int main()
{
	long long num1 = 200530;
	long long num2 = 420800;
	long long resultado = num1 * num2;

	cout << "Direto: " << resultado << endl;
	cout << "Funcao: " << calculo(200530, 420800) << endl;
	
	return 0;
}

long long calculo(long long a, long long b)
{
	return a * b;
}
