#include <iostream>
using namespace std;

struct jogador
{
	char nome[20];
	float salario;
	unsigned gols;
};

void exibir(jogador[], int);

int main()
{
	int tamanho;

	cout << "Quantidade de jogadores: ";
	cin >> tamanho;

	jogador* time = new jogador[tamanho];
	
	cout << "Registre os jogadores\n";
	for (int i = 0; i < tamanho; i++)
		cin >> time[i].nome >> time[i].salario >> time[i].gols;

	exibir(time, tamanho);
	
	delete time;

	return 0;
}

void exibir(jogador vet[], int tam) {
	for (int i = 0; i < tam; i++)
		cout << vet[i].nome 
		<< " recebe R$" << vet[i].salario 
		<< " e fez " << vet[i].gols << " gols\n";
}
