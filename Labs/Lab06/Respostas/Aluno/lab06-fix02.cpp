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

	/*Divis�o entre vari�veis do tipo inteiro sempre resultar� em um valor inteiro, 
	o que compromete a exatid�o do resultado*/
}