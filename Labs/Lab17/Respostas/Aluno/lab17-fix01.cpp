#include <iostream>
using namespace std;

int main()
{
	for (int i = 0; i < 9; i++) {  // Laço com todas as linhas
		// Até a metade
		if (i < 5)  
			for (int j = 0; j <= i; j++)  // Crescente
				cout << "*";
		// Após a metade
		else  
			for (int j = 8-i; j >= 0; j--)  // Decrescente
				cout << "*";
		cout << "\n";
	}
}