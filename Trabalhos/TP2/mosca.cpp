#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "mosca.h"

using namespace std;

#define PI 3.14159265

// -=-=- Funções operator -=-=-

istream& operator>>(istream& is, Cor& cor_lida) {
	short r, g, b;

	is >> r >> g >> b;
	cor_lida.red = r;
	cor_lida.green = g;
	cor_lida.blue = b;

	return is;
}


ostream& operator<<(ostream& os, Cor cor_exibida) {
	os << "\x1b[38;2;" << cor_exibida.red << ";" << cor_exibida.green << ";" << cor_exibida.blue << "m";

	return os;
}


istream& operator>>(istream& is, Mosca& mosca_lida) {
	char nome[20];
	Cor cor;

	is >> nome >> cor;
	strcpy(mosca_lida.nome, nome);
	mosca_lida.cor = cor;

	// Inicialização das variáveis
	mosca_lida.posicao_atual.x = 0;
	mosca_lida.posicao_atual.y = 0;
	mosca_lida.ativa = true;
	mosca_lida.passos = 0;

	return is;
}


ostream& operator<<(ostream& os, Mosca mosca_exibida) {
	os << mosca_exibida.cor << mosca_exibida.nome << "\x1b[0m";  // Código de cor para retornar o padrão

	return os;
}

// -=-=- Funções de voo -=-=-

Ponto deslocar(Ponto inicial, Vetor movimento) {
	float angulo_radiano = movimento.angulo * PI / 180;

	float dx = movimento.magnitude * cos(angulo_radiano);
	float dy = movimento.magnitude * sin(angulo_radiano);

	Ponto final = {inicial.x + dx, inicial.y + dy};

	return final;
}

bool inativas(Mosca alvos[], short tam_vetor) {
	for (int i = 0; i < tam_vetor; i++) {
		if (alvos[i].ativa) {
			return false;
		}
	}
	
	return true;
}

float magnitude(Ponto atual) {
	// Módulo é a raiz quadrada da soma dos quadrados das coordenadas
	float modulo = sqrt(pow(atual.x, 2) + pow(atual.y, 2));

	return modulo;
}
