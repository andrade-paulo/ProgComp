#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main()
{
	char data1[15];
	char data2[15];
	char data3[15];
	char frase[45];

	cout << "Quais suas datas comemorativas preferidas? ";
	cin >> data1 >> data2 >> data3;
	
	strcpy(frase, data1); strcat(frase, ", "); strcat(frase, data2); strcat(frase, " e "); strcat(frase, data3);

	cout << frase << " sao belas festas." << endl;
	
	if (strcmp(data1, "Natal") == 0 || strcmp(data2, "Natal") == 0 || strcmp(data3, "Natal") == 0) {
		cout << "O Natal tambem e uma das minhas datas preferidas!" << endl;
	}

	return 0;
}