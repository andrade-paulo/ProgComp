#pragma once
using namespace std;

// Structs

struct Cor {
	short red, blue, green;
};

struct Ponto {
	float x, y;
};

struct Vetor {
	float magnitude, angulo;
};

struct Mosca {
	char nome[20];
	Ponto posicao_atual;
	Cor cor;
	short passos;
	bool ativa;
};

// Funções

istream& operator>>(istream& is, Mosca& mosca_lida);

ostream& operator<<(ostream& os, Mosca mosca_exibida);

ostream& operator<<(ostream& os, Cor cor_exibida);

Ponto deslocar(Ponto, Vetor);

bool inativas(Mosca[], short);

float magnitude(Ponto);