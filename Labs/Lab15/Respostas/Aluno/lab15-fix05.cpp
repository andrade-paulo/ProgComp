#include <iostream>
using namespace std;

enum estado { aprovado, trancado, reprovado };

struct aluno
{
	char identificacao[20];
	unsigned cod_disciplina;
	short situacao;
};

void exibir(aluno);

int main()
{
	short num;

	cout << "Quantidade de alunos: ";
	cin >> num;

	aluno* sala = new aluno[num];

	cout << "Primeiro aluno: ";
	cin >> sala[0].identificacao >> sala[0].cod_disciplina >> sala[0].situacao;

	exibir(sala[0]);

	delete[] sala;

	return 0;
}

void exibir(aluno estudante) {
	cout << "\nIdentificacao: " << estudante.identificacao << endl;
	cout << "Matricula: " << estudante.cod_disciplina << endl;
	cout << "Situacao: ";
	
	if (estudante.situacao == 0) cout << "Aprovado";
	else if (estudante.situacao == 1) cout << "Trancado";
	else if (estudante.situacao == 2) cout << "Reprovado";
}