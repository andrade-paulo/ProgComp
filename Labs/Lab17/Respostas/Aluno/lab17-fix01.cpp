#include <iostream>
using namespace std;

int main()
{
	for (int i = 0; i < 9; i++) {  // La�o com todas as linhas
		// At� a metade
		if (i < 5)  
			for (int j = 0; j <= i; j++)  // Crescente
				cout << "*";
		// Ap�s a metade
		else  
			for (int j = 8-i; j >= 0; j--)  // Decrescente
				cout << "*";
		cout << "\n";
	}
}