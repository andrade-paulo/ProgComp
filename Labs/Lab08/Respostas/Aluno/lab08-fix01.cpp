#include <iostream>
#include <cmath>
using namespace std;

float imc(float, float);
double imc(double, double);

int main() {
	float imc_f = imc(1.75f, 80.0f);
	double imc_d = imc(1.75, 80.0);

	cout << "6 casas decimais:\n";
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout.precision(6);

	cout << "Indice de massa corporal (FLOAT): " << imc_f << endl;
	cout << "Indice de massa corporal (DOUBLE): " << imc_d << endl;

	cout << "\n10 casas decimais:\n";
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout.precision(10);

	cout << "Indice de massa corporal (FLOAT): " << imc_f << endl;
	cout << "Indice de massa corporal (DOUBLE): " << imc_d << endl;
}

float imc(float altura, float massa) {
	return massa / pow(altura, 2);
}

double imc(double altura, double massa) {
	return massa / pow(altura, 2);
}
