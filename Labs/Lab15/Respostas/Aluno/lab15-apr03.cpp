#include <iostream>
using namespace std;

int main()
{
	int num;

	cout << "Quantos valores? ";
	cin >> num;

	int* valores = new int[num];
	
	cout << "Quais os valores? ";
	for (int i = 0; i < num; i++) {
		cin >> valores[i];
	}

	cout << "Os valores";
	for (int i = 0; i < num; i++) {
		cout << " " << valores[i];
	}
	cout << " foram armazenados";

	delete[] valores;

	return 0;
}