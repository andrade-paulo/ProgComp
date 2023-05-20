#include <iostream>
using namespace std;

union jogador
{
	char nome[25]; // nome do jogador
	int numero; // numero da camisa do jogador
};

struct gol
{
	jogador jog; // identificação do jogador
	int hora, min; // hora e minuto em que o gol foi marcado
};

int main() {
	gol ult_gols[3] = {0};
	char sep;

	cout << "Digite os 3 últimos gols:\n";
	cout << "Gol 1: "; cin >> ult_gols[0].jog.nome; cin >> ult_gols[0].hora >> sep >> ult_gols[0].min;

	cout << "Gol 2: "; cin >> ult_gols[1].jog.nome; cin >> ult_gols[1].hora >> sep >> ult_gols[1].min;

	cout << "Gol 3: "; cin >> ult_gols[2].jog.nome; cin >> ult_gols[2].hora >> sep >> ult_gols[2].min;
}
