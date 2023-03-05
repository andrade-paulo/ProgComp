#include <iostream>
using namespace std;

unsigned char ligarbit(unsigned char, int);
unsigned char desligarbit(unsigned char, int);
bool testarbit(unsigned char, int);

int main() {

	cout << int(desligarbit(167, 1)) << endl;
	cout << int(ligarbit(224, 0)) << endl;
	cout << testarbit(187, 2);

}

unsigned char ligarbit(unsigned char estado, int bit) {
	unsigned char mascara = 1 << bit;
	
	return estado | mascara;
}

unsigned char desligarbit(unsigned char estado, int bit) {
	unsigned char mascara = ~(1 << bit);

	return estado & mascara;
}

bool testarbit(unsigned char estado, int bit) {
	unsigned char mascara = 1 << bit;

	return estado & mascara;
}