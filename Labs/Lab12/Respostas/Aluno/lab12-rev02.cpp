#include <iostream>
using namespace std;

// Registro das cores
struct color {
	short red, green, blue;
};
// -------------------------------------------------------


// Protótipos das funções
istream& operator>>(istream&, color&);

ostream& operator<<(ostream&, color);

color operator+(color&, color&);

color operator*(color&, color&);
// -------------------------------------------------------


// Main
int main()
{
	color cor1, cor2;

	cout << "Digite duas cores:\n";

	cin >> cor1;
	cin >> cor2;

	// Output
	cout << "Soma: ";
	cout << cor1 + cor2;
	cout << "Multiplicacao: ";
	cout << cor1 * cor2;

	return 0;
}
// -------------------------------------------------------


// Funções
istream& operator>>(istream& is, color& nova_cor){
	short r, g, b;

	is.ignore(4); is >> r;
	is.ignore(1); is >> g;
	is.ignore(1); is >> b;
	is.ignore(2);

	nova_cor.red = r;
	nova_cor.green = g;
	nova_cor.blue = b;

	return is;
}


ostream& operator<<(ostream& os, color cor_exibida) {
	os << "RGB(" << cor_exibida.red << "," << cor_exibida.green << "," << cor_exibida.blue << ")" << endl;
	return os;
}


color operator+(color& cor_1, color& cor_2) {
	color cor_somada;

	cor_somada.red = cor_1.red + cor_2.red;
	cor_somada.green = cor_1.green + cor_2.green;
	cor_somada.blue = cor_1.blue + cor_2.blue;

	if (cor_somada.red > 255) cor_somada.red = 255;
	if (cor_somada.green > 255) cor_somada.green = 255;
	if (cor_somada.blue > 255) cor_somada.blue = 255;

	return cor_somada;
}


color operator*(color& cor_1, color& cor_2) {
	color cor_mult;

	cor_mult.red = cor_1.red * cor_2.red / 255;
	cor_mult.green = cor_1.green * cor_2.green / 255;
	cor_mult.blue = cor_1.blue * cor_2.blue / 255;

	return cor_mult;
}
// -------------------------------------------------------
