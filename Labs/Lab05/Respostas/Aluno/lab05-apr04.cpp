#include <iostream>
#include <cmath>
using namespace std;

float modulo(float, float);

int main()
{
	float x, y;
	
	cout << "x: ";
	cin >> x;
	cout << "y: ";
	cin >> y;

	cout << "Modulo do vetor: " << modulo(x, y);
}

float modulo(float coord_x, float coord_y)
{
	return sqrt(pow(coord_x, 2) + pow(coord_y, 2));
}
