#include <iostream>
#include <cmath>

float angulo(float coord_x, float coord_y)
{
	return atan2(coord_y, coord_x) * 180 / 3.14159;
}

float modulo(float coord_x, float coord_y)
{
	return sqrt(pow(coord_x, 2) + pow(coord_y, 2));
}