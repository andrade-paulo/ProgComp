#include <iostream>
using namespace std;

int main(int argc, char ** argv) {
	if (argc == 4)
		cout << "Eu estou aprendendo " << argv[3] << "/" << argv[1] << "!";
	else
		cout << "Informe 3 argumentos";
}