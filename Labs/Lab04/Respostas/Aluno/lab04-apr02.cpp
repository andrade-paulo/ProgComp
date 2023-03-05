#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float angulo;
	
	cout << "Digite um angulo: ";
	cin >> angulo;

	cout << "Seno = " << sin(angulo * 3.1415 / 180);
}