#include <iostream>
using namespace std;

int main()
{
	int * p1, * p2;

	int A[] = { 46, 78, 40, 96, 74, 58, 32, 56, 91, 6 };
	int tam = sizeof(A) / sizeof(int);

	for (int i = 0; i < tam; i += 2)
		cout << "[" << A[i] << "," << A[i+1] << "] ";

	return 0;
}
