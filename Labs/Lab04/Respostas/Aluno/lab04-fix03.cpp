#include <iostream>
using namespace std;

void UmTres();
void Dois();

int main() {
	cout << "Comecando agora:\n";
	UmTres();
	cout << "\nPronto!";
}

void UmTres() {
	cout << "Um ";
	Dois();
	cout << "Tres";
}

void Dois() {
	cout << "Dois ";
}