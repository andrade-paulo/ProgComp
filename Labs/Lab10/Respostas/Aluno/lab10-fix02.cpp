#include <iostream>
using namespace std;

int main()
{
	float precos[3] = { 1.5f, 2.0f, 1.0f };
	float quant[3];

	short vetA[5] = { 10, 20, 30, 40, 50 };
	short vetB[5] = { 10, 20, 0, 0, 0 };
	short vetC[5] = { 0, 0, 30, 0, 0 };

	cout << "Vetor A: " << vetA[0] << ", " << vetA[1] << ", " << vetA[2] << ", " << vetA[3] << ", " << vetA[4] << endl;
	cout << "Vetor B: " << vetB[0] << ", " << vetB[1] << ", " << vetB[2] << ", " << vetB[3] << ", " << vetB[4] << endl;
	cout << "Vetor C: " << vetC[0] << ", " << vetC[1] << ", " << vetC[2] << ", " << vetC[3] << ", " << vetC[4] << endl;

	return 0;
}