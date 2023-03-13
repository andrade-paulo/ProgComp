#include <iostream>
using namespace std;

int main()
{
	char nome[20];
	char sobrenome[20];
		
	cout << "Digite nome e sobrenome: ";
	cin >> nome >> sobrenome;
	
	cout << "Bom dia senhor " << sobrenome << ". Ou devo chama-lo de " << nome << "?";

	return 0;
}