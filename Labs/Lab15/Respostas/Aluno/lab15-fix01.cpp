#include <iostream>
using namespace std;

int main()
{
	int quant;

	cout << "Digite o numero de alunos (min. 2): ";
	cin >> quant;

	float* vetor = new float [quant];

	cout << "Digite a nota de dois alunos: \n";
	cin >> vetor[0] >> vetor[1];
	
	cout << "As notas digitadas foram " << vetor[0] << " e " << vetor[1];	
	delete [] vetor;

	return 0;
}