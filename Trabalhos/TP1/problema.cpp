#include <iostream>
#include "genetico.h"
using namespace std;

#define VERMELHO "\033[31m"
#define VERDE "\033[32m"
#define PADRAO "\033[m"

int main() {
	unsigned short solucoes_usuario[6];

	cout << "Entre com 6 solucoes iniciais (numeros entre 0 e 65535)\n";
	
	// Loop para receber os inputs do usuário
	for (int i = 0; i < size(solucoes_usuario); i++) {
		cin >> solucoes_usuario[i];
	}

	// Resultados dos algoritmos geneticos
	unsigned short solucoes_algoritmos[4];  // [ponto unico, aritmetico, simples, dupla]
	solucoes_algoritmos[0] = cruzamento_ponto_unico(solucoes_usuario[0], solucoes_usuario[1]);
	solucoes_algoritmos[1] = cruzamento_aritmetico(solucoes_usuario[2], solucoes_usuario[3]);
	solucoes_algoritmos[2] = mutacao_simples(solucoes_usuario[4]);
	solucoes_algoritmos[3] = mutacao_dupla(solucoes_usuario[5]);

	// OUTPUT

	cout << "\nResultado da Avaliacao\n" 
		<< "------------------------\n";
	
	// Avaliação dos inputs
	for (int i = 0; i < size(solucoes_usuario); i++) {
		if (avaliar(solucoes_usuario[i])) {  // avaliar() exibe os valores e retorna o resultado (V/F)
			cout << VERDE << "Ok\n" << PADRAO;
		}
		else {
			cout << VERMELHO << "X\n" << PADRAO;
		}
	}

	cout << "------------------------\n";

	// Avaliacoes dos algoritmos geneticos
	for (int i = 0; i < size(solucoes_algoritmos); i++) {
		if (avaliar(solucoes_algoritmos[i])) {  // avaliar() exibe os valores e retorna o resultado (V/F)
			cout << VERDE << "Ok\n" << PADRAO;
		}
		else {
			cout << VERMELHO << "X\n" << PADRAO;
		}
	}

	return 0;
}