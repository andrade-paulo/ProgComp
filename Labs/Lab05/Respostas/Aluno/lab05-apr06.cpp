#include <iostream>
#include "vetores.h"
using namespace std;

int main()
{
	float x, y;
	
	cout << "x: ";
	cin >> x;
	cout << "y: ";
	cin >> y;

	cout << "Coordenadas polares do vetor: (" << modulo(x, y) << ", " << angulo(x, y) << ")";
}
