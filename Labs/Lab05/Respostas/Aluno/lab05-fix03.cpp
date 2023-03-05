#include <iostream>
using namespace std;

float media_harmonica(float, float);

int main()
{
	float num1, num2;
	
	cout << "Numero 1: ";
	cin >> num1;
	cout << "Numero 2: ";
	cin >> num2;

	cout << "Media harmonica: " << media_harmonica(num1, num2);
}

float media_harmonica(float num1, float num2)
{
	return 2 * num1 * num2 / (num1 + num2);
}
