#ifdef estrutura_h
#define estrutura_h

typedef struct Endereco{
	int codEnd;
	string rua;
	string complemento;
	string bairro;
	string cidade;
	string estado;
	string cep;
	int numero;
	int alt;
	struct Endereco *dir;
	struct Endereco *esq;
}endereco ;

endereco *raEnd = NULL;

typedef struct Vendedor {
	int numMatricula;
	string nome;
	int cpf;
	endereco endCliente;
	string telefone;
	string email;
	string dataNas;
	int alt;
	struct Vendedor *dir;
	struct vendedor *esq;
}vendedor ;

vendedor *raVend = NULL;

typedef struct Cliente {
	string nome;
	int cpf;
	endereco endCliente;
	string telefone;
	string email;
	string dataNas;
	int alt;
	struct Cliente *dir;
	struct Cliente *esq;
}cliente;

cliente *raCli = NULL;
typedef struct Fornecedor {
	string cnpj;
	string nomeFan;
	string end;
	int telefone;
	string email;
	int alt;
	struct Fornecedor *dir;
	struct Fornecedor *esq;
} fornecedor;

fornecedor *raFor = NULL;

typedef struct Produto {
	int codProduto;
	string nome;
	int quant;
	fornecedor prod;
	int alt;
	struct Produto *dir;
	struct Produto *esq;
}produto;

produto *raPro = NULL;

typedef struct Venda {
	int codVenda;
	vendedor ven;
	cliente ven;
	produto ven;
	string data;
	int alt;
	struct Venda *dir;
	struct Venda *esq;
}venda;

venda *raVen = NULL;
//int altura(arv *r);

#endif