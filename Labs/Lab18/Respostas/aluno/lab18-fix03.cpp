#include <iostream>
using namespace std;

int main()
{
	float daiane = 100, celia = 100;
	int cont = 0;
	
	while (daiane >= celia) {
		daiane += 100 * 0.10;
		celia += celia * 0.05;
		cont++;
	}

	cout << "Apos " << cont << " anos:" << endl;
	cout << "Daiane: R$" << daiane << endl;
	cout << "Celia: R$" << celia << endl;
}