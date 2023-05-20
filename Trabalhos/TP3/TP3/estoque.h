struct produto {
	char nome[20];
	float preco;
	unsigned short quant;
};

struct vetor_estoque {  // Informações do vetor de estoque
	unsigned short tam;
	unsigned short expoente;
	produto* itens;
	produto* ultimo_item;  // Ponteiro para manter a faixa de elementos inicializados
};

struct pedido {
	char empresa[50];
	char arquivo[20];

	unsigned short tam;
	produto* produtos;

	bool pedido_valido;

	float valor_bruto;
	float desconto;
	float valor_final;
};

// -=-=- Funções para Arquivos -=-=-

vetor_estoque carregar_estoque();

// -=-=- Funções de Menu -=-=-

char menu();

void pedir(vetor_estoque&);

void adicionar(vetor_estoque&);

void excluir(vetor_estoque&);

void listar(vetor_estoque&);

void sair(vetor_estoque&);

// -=-=- Funções auxiliares -=-=-

void ajustar_letras(char*);

void expandir(vetor_estoque&, int, produto);