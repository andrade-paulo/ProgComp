#include <iostream>
#include "binario.h"
using namespace std;

bool avaliar(unsigned short solucao) {
	// Listas de referência na sequência alfabética inversa
	int lista_peso[16] = { 1, 4, 2, 5, 4, 2, 1, 4, 3, 2, 1, 9, 4, 5, 3, 12 };
	int lista_valor[16] = { 12, 4, 3, 10, 15, 20, 10, 2, 1, 1, 3, 15, 10, 8, 4, 4 };

	int peso = 0, valor = 0;

	// Repetição para percorrer as listas de referência
	for (int i = 15; i >= 0; i--) {
		if (testar_bit(solucao, i)) {  // Verifica se o bit equivalente está ligado
			peso = peso + lista_peso[i];
			valor = valor + lista_valor[i];
		}
	}

	// Organização da saída em tabela
	cout << right; cout.width(5); cout << solucao << " -";
	cout << right; cout.width(2); cout << "$"; cout.width(2); cout << valor << " -";
	cout << right; cout.width(3); cout << peso << "kg" << " - ";

	if (peso <= 20) {
		return true;
	} else {
		return false;
	}
}


unsigned short cruzamento_ponto_unico(unsigned short solucao_a, unsigned short solucao_b) {
	unsigned short bits_a = bits_altos(solucao_a);
	unsigned short bits_b = bits_baixos(solucao_b);
	
	return or_binario(bits_a, bits_b);
}


unsigned short cruzamento_aritmetico(unsigned short solucao_a, unsigned short solucao_b) {
	return and_binario(solucao_a, solucao_b);
}


unsigned short mutacao_simples(unsigned short solucao) {
	if (testar_bit(solucao, 9)) {
		return desligar_bit(solucao, 9);
	}
	else {
		return ligar_bit(solucao, 9);
	}
}


unsigned short mutacao_dupla(unsigned short solucao) {
	unsigned short mutacao;
	
	// Bit 3
	if (testar_bit(solucao, 3)) {
		mutacao = desligar_bit(solucao, 3);
	}
	else {
		mutacao = ligar_bit(solucao, 3);
	}

	// Bit 12
	if (testar_bit(solucao, 12)) {
		mutacao = desligar_bit(mutacao, 12);
	}
	else {
		mutacao = ligar_bit(mutacao, 12);
	}

	return mutacao;
}