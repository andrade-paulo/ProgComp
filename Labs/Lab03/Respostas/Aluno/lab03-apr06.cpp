#include <iostream>
using namespace std;

int main() {
	float a, b, h;
	cout << "Lado a: ";
	cin >> a;
	cout << "Lado b: ";
	cin >> b;
	cout << "A area da base = " << (a * b) << endl;
	cout << "Altura: ";
	cin >> h;
	cout << "Volume do prisma = " << (a * b) * h << "cm cubicos";
}
