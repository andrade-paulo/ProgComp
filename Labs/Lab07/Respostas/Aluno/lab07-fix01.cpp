#include <iostream>
using namespace std;

char ascii(int);

int main() {
	cout << ascii(80);
	cout << ascii(114);
	cout << ascii(111);
	cout << ascii(103);
	cout << ascii(67);
	cout << ascii(111);
	cout << ascii(109);
	cout << ascii(112);
}

char ascii(int numero) {
	return numero;
}