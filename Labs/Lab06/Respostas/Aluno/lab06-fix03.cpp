#include <iostream>
using namespace std;

int main() {
	short short_int = sizeof(short_int);
	int inteiro = sizeof(inteiro);
	long long_int = sizeof(long_int);
	long long ll_int = sizeof(ll_int);
	
	cout << left; cout << "short:";
	cout << "      " << short_int << " bytes" << endl;
	cout << left; cout << "int:";
	cout << "        " << inteiro << " bytes" << endl;
	cout << left; cout << "long int:";
	cout << "   " << long_int << " bytes" << endl;
	cout << left; cout << "long long:";
	cout << "  " << ll_int << " bytes" << endl;
	cout << left; cout << "Total:";
	cout << "      " << short_int + inteiro + long_int + ll_int << " bytes";
}