#include <iostream>
using namespace std;

int main()
{
	int* p = new int;
	
	*p = 100;

	cout << "Conteudo armazenado: " << *p << endl;
	cout << "Novo valor: ";
	cin >> *p;
	
	delete p;

	return 0;
}