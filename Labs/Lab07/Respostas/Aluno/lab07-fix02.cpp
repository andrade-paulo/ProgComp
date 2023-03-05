#include <iostream>
using namespace std;

int ler_senha();
void alarme();

int main() {
	int s;
	
	cout << "Iniciando com um som..." << endl;
	alarme();

	s = ler_senha();

	cout << "Obrigado!";
}

int ler_senha() {
	int senha;

	cout << "Senha: ______\b\b\b\b\b\b";
	cin >> senha;

	return senha;
}

void alarme() {
	cout << "\a";
}