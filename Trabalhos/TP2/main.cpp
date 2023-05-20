#include <iostream>
#include <cstdlib>
#include <ctime>
#include "mosca.h"

using namespace std;

void mover(Mosca*);

void resultados(Mosca[], int, int);

int main() {
	// Input das moscas
	Mosca enxame[10];

	for (int i = 0; i < 10; i++) {
		cin >> enxame[i];
	}

	// Simulação

	cout << "\nSimulacao" << endl << "---------" << endl;

	int passo;  // A variável está fora do for para ser aproveitada poteriormente fora do escopo
	for (passo = 1; !inativas(enxame, 10); passo++) {
		cout << "#" << passo << ": ";

		// Sorteio
		srand(time(NULL));
		short quant_moscas = rand() % 10 + 1;
		Mosca** sorteadas = new Mosca*[quant_moscas];
		cout << quant_moscas << " (";

		// Movimentação
		for (int i = 0; i < quant_moscas; i++) {
			short mosca_sort = rand() % 10;
			sorteadas[i] = &enxame[mosca_sort];

			// Teste de inatividade individual
			if (magnitude(sorteadas[i]->posicao_atual) < 100) {
				cout << " " << mosca_sort;
				mover(sorteadas[i]);
			} 
			else {
				cout << " x";
				sorteadas[i]->ativa = false;
			}
		}

		cout << " ) = ";

		// Exibição das novas inativas
		short novas_inativas = 0;
		for (int i = 0; i < quant_moscas; i++) {
			if (magnitude(sorteadas[i]->posicao_atual) >= 100 && sorteadas[i]->ativa) {
				cout << " " << *sorteadas[i] << endl;
				sorteadas[i]->ativa = false;  // Inativa a mosca
				novas_inativas++;
			}
		}

		// Caso não haja inativas
		if (!novas_inativas)
			cout << " 0" << endl;

		delete[] sorteadas;
	}

	cout << "---------" << endl;

	// Estatísticas
	resultados(enxame, 10, passo);

	return 0;
}

void mover(Mosca* mosca) {
	srand(time(NULL));

	Vetor mov = { rand() % 10 + 1, rand() % 361 };  // 1 a 10 e 0 a 360

	mosca->posicao_atual = deslocar(mosca->posicao_atual, mov);
	mosca->passos++;
}

void resultados(Mosca moscas[], int quant_moscas, int total_passos) {
	cout << "\nResultados" << endl << "----------------------" << endl;

	Mosca mais_rapida;
	
	for (int i = 0; i < quant_moscas; i++) {
		cout << moscas[i] << " = " << moscas[i].passos << endl;

		// Comparação de passos das moscas
		if (i == 0)
			mais_rapida = moscas[i];
		else
			if (moscas[i].passos < mais_rapida.passos)
				mais_rapida = moscas[i];
	}

	cout << "----------------------" << endl;

	cout << "Total de passos: " << mais_rapida.cor << total_passos << "\x1b[0m" << endl;
	cout << "Em media, as moscas levaram " << mais_rapida.cor << total_passos / quant_moscas << "\x1b[0m passos" << endl;
	cout << "A mosca mais rapida foi " << mais_rapida.cor << mais_rapida << "\x1b[0m, com " << mais_rapida.cor << mais_rapida.passos << "\x1b[0m passos" << endl
		<< "O que equivale a se distanciar " << mais_rapida.cor << magnitude(mais_rapida.posicao_atual) / mais_rapida.passos << "\x1b[0m cm por passo" << endl;

	cout << "----------------------" << endl;
}
