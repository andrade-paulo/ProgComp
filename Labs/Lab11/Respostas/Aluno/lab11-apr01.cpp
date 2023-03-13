#include <iostream>
using namespace std;

int main()
{
	char senha[10] = "5";
	char tentativa[10];
	
	cout << "Senha: ";
	cin >> tentativa;
	
	if (strcmp(senha, tentativa) == 0) {
		cout << "Cesar diz: ufxyjgns.htr/4aVKZkc2";
	}
	else {
		cout << "Senha incorreta";
	}

	return 0;
}