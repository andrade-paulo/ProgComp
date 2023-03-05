#include <iostream>
using namespace std;

float promocao(float);

int main()
{
	float salario;
	
	cout << "Salario atual: R$";
	cin >> salario;

	cout << "Seu salario agora e R$" << promocao(salario);
}

float promocao(float salario_atual)
{
	return salario_atual * 1.15;
}
