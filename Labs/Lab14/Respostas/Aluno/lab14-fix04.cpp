#include <iostream>
using namespace std;

union cor {
	struct {
		short R;
		short G;
		short B;
		short A;
	} RGBA;

	unsigned int_RGBA;
};

void ler_RGBA(cor*);

cor ler_int_RGBA(cor);

int main()
{
	cor x, * p;
	
	p = &x;

	cout << "Digite uma cor no formato \n";
	ler_RGBA(p);
	x = ler_int_RGBA(x);

	return 0;
}

void ler_RGBA(cor* p) {
	cout << "RGBA: ";
	cin >> p->RGBA.R >> p->RGBA.G >> p->RGBA.B >> p->RGBA.A;
}

cor ler_int_RGBA(cor x) {
	int valor;
	
	cout << "Int32: ";
	cin >> valor;

	x.int_RGBA = valor;

	return x;
}
