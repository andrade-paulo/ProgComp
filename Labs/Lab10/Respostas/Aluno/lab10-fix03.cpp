#include <iostream>
using namespace std;

int main()
{
	int valores[5];
	cout << "Digite 5 valores: ";
	cin >> valores[0] >> valores[1] >> valores[2] >> valores[3] >> valores[4];
	
	cout << "A soma do vetor e " << valores[0] + valores[1] + valores[2] + valores[3] + valores[4];

	return 0;
}