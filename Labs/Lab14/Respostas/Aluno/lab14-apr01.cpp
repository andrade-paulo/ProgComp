#include <iostream>
using namespace std;

struct Tigela {
	union {
		bool cheia;
		bool vazia;
	} estado;
	union {
		bool sopa;
		bool canja;
	} alimento;
};

void Fome(Tigela*);

int main()
{
	Tigela tig, * p = &tig;

	tig.estado.cheia = true;
	tig.alimento.sopa = true;

	cout << "Antes da janta \n";
	cout << "Cheia: " << tig.estado.cheia << endl;
	cout << "--------------------\n";
	Fome(p);
	cout << "Apos a janta \n";
	cout << "Vazia: " << tig.estado.vazia << endl;
}

void Fome(Tigela* p) {
	p->estado.vazia = true;
}
