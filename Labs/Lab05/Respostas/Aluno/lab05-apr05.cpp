#include <iostream>
#include <cmath>
using namespace std;

float angulo(float, float);

int main()
{
	float x, y;
	
	cout << "x: ";
	cin >> x;
	cout << "y: ";
	cin >> y;

	cout << "Angulo em graus: " << angulo(x, y);
}

float angulo(float coord_x, float coord_y)
{
	return atan2(coord_y, coord_x) * 180 / 3.14159;
}
