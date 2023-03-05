#include <iostream>
#include <cmath>
using namespace std;

float IMC(float, float);

int main()
{
	float mas, alt;
	
	cout << "Massa (kg): ";
	cin >> mas;
	cout << "Altura (m): ";
	cin >> alt;

	cout << "IMC = " << IMC(mas, alt);
}

float IMC(float massa, float altura)
{
	return massa / pow(altura, 2);
}
