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
	jogador jog; // identifica��o do jogador
	float x, y, z; // posi��o da bola nas coordenadas
	trave local; // onde a bola entrou
	float velo; // velocidade da bola
	float acel; // acelera��o da bola
};

int main() {
	gol estatistica[10]; // estat�sticas para at� 10 gols
	
	cout << (estatistica + 9)->local;

	return 0;
}