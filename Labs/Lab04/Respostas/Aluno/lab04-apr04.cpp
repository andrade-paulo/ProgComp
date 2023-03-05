#include <iostream>
#include <cmath>
using namespace std;

float VolumeCilindro(float raiobase, float altura);

int main() {
	float rb, alt;
	
	cout << "Calculadora de Volume de um Cilindro\n" 
		<< "------------------------------------\n";
	cout << "Raio da Base: ";
	cin >> rb;
	cout << "Altura: ";
	cin >> alt;

	cout << "Volume do cilindro = " << VolumeCilindro(rb, alt);
}

float VolumeCilindro(float raiobase, float altura) {
	float volume;
	volume = 3.14159 * pow(raiobase, 2) * altura;

	return volume;
}