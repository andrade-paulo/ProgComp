#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	srand(time(NULL));

	int num;
	num = rand();
	cout << num << endl;
	
	if (num > 16834)
		cout << "GRANDE";
	else
		cout << "PEQUENO";
}