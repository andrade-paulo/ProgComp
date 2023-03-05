#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float px, py, qx, qy;

	cout << "Ponto P:\n";
	cin >> px >> py;
	cout << "Ponto Q:\n";
	cin >> qx >> qy;

	cout << "Distancia entre P e Q = " << sqrt(pow((qx - px), 2) + pow((qy - py), 2));
}