#include <iostream>
using namespace std;

// Registro das cores
struct color {
	short red, green, blue;
};


// Protótipos das funções
color ler_cor();

void exibir_cor(color);

color somar_cores(color, color);

color multiplicar_cores(color, color);


int main()
{
	color cor1, cor2, cor_soma, cor_mult;
	
	cout << "Digite duas cores:\n";

	cor1 = ler_cor();
	cor2 = ler_cor();

	// Output
	cout << "Soma: ";
	exibir_cor( somar_cores(cor1, cor2) );
	cout << "Multiplicacao: ";
	exibir_cor( multiplicar_cores(cor1, cor2) );

	return 0;
}


// Funções
color ler_cor() {
	color nova_cor;
	short r, g, b;

	cin.ignore(4); cin >> r;
	cin.ignore(1); cin >> g;
	cin.ignore(1); cin >> b;
	cin.ignore(2);

	nova_cor.red = r;
	nova_cor.green = g;
	nova_cor.blue = b;

	return nova_cor;
}


void exibir_cor(color cor_exibida) {
	cout << "RGB(" << cor_exibida.red << "," << cor_exibida.green << "," << cor_exibida.blue << ")" << endl;
}


color somar_cores(color cor_1, color cor_2) {
	color cor_somada;

	cor_somada.red = cor_1.red + cor_2.red;
	cor_somada.green = cor_1.green + cor_2.green;
	cor_somada.blue = cor_1.blue + cor_2.blue;

	if (cor_somada.red > 255) cor_somada.red = 255;
	if (cor_somada.green > 255) cor_somada.green = 255;
	if (cor_somada.blue > 255) cor_somada.blue = 255;

	return cor_somada;
}


color multiplicar_cores(color cor_1, color cor_2) {
	color cor_mult;

	cor_mult.red = cor_1.red * cor_2.red / 255;
	cor_mult.green = cor_1.green * cor_2.green / 255;
	cor_mult.blue = cor_1.blue * cor_2.blue / 255;

	return cor_mult;
}
