#include <iostream>
using namespace std;

int main() {
	int distancia;
	int litros;
	
	cout << "Distancia percorrida (km): ";
	cin >> distancia;
	cout << "Litros de combustivel: ";
	cin >> litros;
	
	cout << "O consumo do seu carro foi " << distancia/litros << "km/L";

	/*Divisão entre variáveis do tipo inteiro sempre resultará em um valor inteiro, 
	o que compromete a exatidão do resultado*/
}