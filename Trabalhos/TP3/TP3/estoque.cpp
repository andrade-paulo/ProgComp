#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <fstream>
#include "estoque.h"

using namespace std;


// -=-=- Fun��es para Arquivos -=-=-

vetor_estoque carregar_estoque() {
	ifstream fin;
	fin.open("estoque.bin", ios_base::in | ios_base::binary);

	// Inicializa��o do registro
	vetor_estoque estoque; 
	estoque = { 0, 0 };

	if (fin.is_open()) {  // Caso j� exista o arquivo de estoque
		cout << "Carregando estoque..." << endl;

		fin.read((char*) &estoque.tam, sizeof(unsigned short));

		estoque.itens = new produto[estoque.tam]{};  // 'new' ao carregar, 'delete[]' ao sair

		fin.read((char*) estoque.itens, estoque.tam * sizeof(produto));

		estoque.ultimo_item = estoque.itens + estoque.tam - 1;  // Endere�o do �ltimo item inicializado
		
		fin.close();  // N�o ser� mais necess�rio qualquer outra leitura
	}
	else {  // Caso ainda n�o exista o arquivo de estoque
		cout << "Gerando um novo estoque vazio..." << endl;
		estoque.itens = new produto[0]{};  // 'new' ao carregar, 'delete[]' ao sair

		estoque.ultimo_item = estoque.itens;  // Endere�o do �ltimo item � o mesmo que o do primeiro
	}

	return estoque;
}


// -=-=- Fun��es de Menu -=-=-

char menu() {
	cout << endl;
	cout << "Sistema de Controle" << endl
		 << "====================" << endl
		 << "(P)edir" << endl
		 << "(A)dicionar" << endl
		 << "(E)xcluir" << endl
		 << "(L)istar" << endl
		 << "(S)air" << endl
		 << "====================" << endl
		 << "Opcao: [_]\b\b";

	char res;
	cin >> res;

	return res;
}


void pedir(vetor_estoque& estoque) {
	pedido venda;
	// carregar_pedido(venda);  // Receber o pedido e inicializar a venda

	cout << "Empresa: " << venda.empresa << endl;
	cout << "Tamanho: " << venda.tam << endl << endl;

	for (int i = 0; i < venda.tam; i++) {
		cout << venda.produtos[i].nome << " - " << venda.produtos[i].quant << "kg" << endl;
	}

	// Valida��o dos itens

	// Desconto para vendas >= R$1000,00
	if (venda.valor_bruto >= 1000) {
		venda.desconto = 0.1 * 1000;
		venda.valor_final = venda.valor_bruto - venda.desconto;
	}
}


void adicionar(vetor_estoque& original) {
	// Input do usu�rio
	produto item;
	cout << endl;
	cout << "Adicionar" << endl << "---------" << endl;
	cout << "Produto: ";
	cin >> item.nome;
	cout << "Preco: R$";
	cin >> item.preco;
	cout << "Quantidade: ";
	cin >> item.quant;
	cout << endl;

	ajustar_letras(item.nome);

	// Adi��o ao vetor de estoque

	if (original.tam == 0) {
		expandir(original, 0, item);
		return;  // Encerra a fun��o
	}

	int posicao; 

	for (posicao = 0; &original.itens[posicao] <= original.ultimo_item; posicao++) {  // Percorre a faixa de elementos inicializados
		if (!strcmp(original.itens[posicao].nome, item.nome)) {  // Caso j� exista o produto

			original.itens[posicao].preco = item.preco;
			original.itens[posicao].quant += item.quant;

			return;  // Encerra a fun��o
		}
	}

	if (posicao >= original.tam) {
		expandir(original, posicao, item);
	}
	else {
		original.itens[posicao] = item;  // Caso haja espa�o, apenas acrescenta o novo item
		original.ultimo_item++;  // Novo endere�o do �ltimo produto
	}
}


void excluir(vetor_estoque& estoque) {
	// Input do usu�rio
	cout << endl;
	cout << "Excluir" << endl << "-------" << endl;
	for (int i = 0; &estoque.itens[i] <= estoque.ultimo_item; i++) {
		cout << i+1 << ") " << estoque.itens[i].nome << endl;
	}
	
	cout << endl << "Numero do produto: ";
	int esc;
	cin >> esc;

	cout << "Deseja excluir \"" << estoque.itens[esc - 1].nome << "\" (S/N)? ";
	char confirmacao;
	cin >> confirmacao;

	if (confirmacao == 's' || confirmacao == 'S') {
		// Atualiza��o do vetor de estoque
		estoque.itens[esc - 1] = *estoque.ultimo_item;
		*estoque.ultimo_item = {};
		estoque.ultimo_item--;  // Novo endere�o do �ltimo produto
	}
	else {
		cout << "Operacao de exclusao cancelada" << endl;
	}

	cout << endl;
}


void listar(vetor_estoque& estoque) {
	cout << endl;
	cout << "Listagem" << endl << "--------" << endl;

	for (int i = 0; &estoque.itens[i] <= estoque.ultimo_item && estoque.tam != 0; i++) {
		cout << estoque.itens[i].nome << " - ";
		cout << "R$" << estoque.itens[i].preco << " - ";
		cout << estoque.itens[i].quant << "kg" << endl;
	}

	cout << endl;
}


void sair(vetor_estoque& estoque) {
	ofstream fout;
	fout.open("estoque.bin", ios_base::out | ios_base::binary);

	estoque.tam = estoque.ultimo_item - &estoque.itens[0] + 1;  // Tamanho real final

	if (fout.is_open()) {
		fout.write((char*)&estoque.tam, sizeof(unsigned short));
		fout.write((char*)estoque.itens, estoque.tam * sizeof(produto));
		fout.close();
	}
	else {
		cout << "N�o foi poss�vel acessar o arquivo de estoque." << endl;
		system("pause");
		exit(EXIT_FAILURE);
	}

	delete[] estoque.itens;
}


// -=-=- Fun��es auxiliares -=-=-

void ajustar_letras(char* palavra) {
	// Primeira letra mai�scula
	if (palavra[0] >= 97 && palavra[0] <= 122)
		palavra[0] -= 32;

	// Demais letras min�sculas
	for (int i = 1; palavra[i]; i++) {
		if (palavra[i] >= 65 && palavra[i] <= 90)
			palavra[i] += 32;
	}
}


void expandir(vetor_estoque& original, int posicao, produto item) {
	produto* expansao = new produto[original.tam + pow(2, original.expoente)]{};

	for (int i = 0; i < original.tam; i++) {
		expansao[i] = original.itens[i];  // C�pia do vetor original para o expandido
	}

	expansao[posicao] = item;  // Adia��o do novo produto

	// Atualiza��o das informa��es do registro
	original.tam += pow(2, original.expoente);
	original.expoente++;
	original.ultimo_item = &expansao[posicao];

	delete[] original.itens;  // Libera��o da mem�ria antiga

	original.itens = expansao;  // Novo endere�o do vetor de estoque
}