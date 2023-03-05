#include <iostream>
#include <cmath>
using namespace std;

float quadrado(float);
float cubo(float);

int main()
{
	float n;
	
	cout << "Numero: ";
	cin >> n;

	cout << "Quadrado: " << quadrado(n) << endl;
	cout << "Cubo: " << cubo(n) << endl;
	cout << "Cubo do quadrado: " << cubo(quadrado(n)) << endl;
}

float quadrado(float num) {
	return pow(num, 2);
}


float cubo(float num) {
	return pow(num, 3);
}


