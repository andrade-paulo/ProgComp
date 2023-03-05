#include <iostream>
#include <cstdlib>
using namespace std;

int Inicializar();
void ligar();
void verificar();
void ativar();

int main() {
	int num;
	
	num = Inicializar();
	
	if (num > 16384)
		cout << "Sistema em funcionamento\n";
	else
		cout << "Falha na inicializacao\n";
}

int Inicializar() {
	cout << "Iniciando Sistema:\n";
	ligar();
	verificar();
	ativar();

	cout << "Inicializacao concluida\n";

	return rand();
}

void ligar() {
	cout << "- Ligando dispositivos\n";
}

void verificar() {
	cout << "- Verificando integridade\n";
}

void ativar() {
	cout << "- Ativando processos\n";
}
