#include <iostream>
using namespace std;

int main(int argc, char ** argv) {
	if (argc == 2)
		system(argv[1]);
	else
		cout << "Informe 1 programa para executar";
}