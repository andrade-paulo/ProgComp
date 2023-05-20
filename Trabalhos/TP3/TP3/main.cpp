#include <iostream>
#include <cmath>
#include "estoque.h"

using namespace std;

int main() {
	vetor_estoque estoque = carregar_estoque();
	
	char opcao;
	while (1) {  // Famoso while true
		cout << endl;

		opcao = menu();

		switch (opcao) {
		case 'P': case 'p':
			//pedir(estoque);
			cout << "Estamos fazendo uns ajustes..." << endl;
			break;

		case 'A': case 'a':
			adicionar(estoque);
			break;

		case 'E': case 'e':
			excluir(estoque);
			break;

		case 'L': case 'l':
			listar(estoque);
			break;

		case 'S': case 's':
			sair(estoque);
			return 0;

		default:
			cout << "Opcao invalida!" << endl;
		}
	}
}