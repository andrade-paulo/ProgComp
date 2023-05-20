#include <iostream>
using namespace std;

enum trave { LEsq, LDir, CantoEsq, CantoDir, Centro };

union jogador
{
	char nome[25];
	int numero;
};

struct gol
{
	jogador jog; // identificação do jogador
	float x, y, z; // posição da bola nas coordenadas
	trave local; // onde a bola entrou
	float velo; // velocidade da bola
	float acel; // aceleração da bola
};

int main() {
	gol estatistica[10]; // estatísticas para até 10 gols
	
	cout << (estatistica + 9)->local;

	return 0;
}