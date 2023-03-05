#include <iostream>
using namespace std;

float fahr(float);

int main()
{
	float temp_c;
	
	cout << "Temperatura em graus Celsius: ";
	cin >> temp_c;

	cout << temp_c << " graus Celsius = " << fahr(temp_c) << " graus Fahrenheit";
}

float fahr(float temperatura)
{
	float temp_f = 1.8 * temperatura + 32;
	return temp_f;
}
