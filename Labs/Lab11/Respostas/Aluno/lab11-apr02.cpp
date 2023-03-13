#include <iostream>
#include <string>
using namespace std;

int main()
{
	char vet[5];
	int num2;
	
	cout << "Digite dois numeros: ";
	cin >> vet >> num2;

	cout << "O produto entre eles e " << stoi(vet) * num2;

	return 0;
}