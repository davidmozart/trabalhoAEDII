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

struct Vendedor {
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
};
vendedor *raVend = NULL;

struct Cliente {
	string nome;
	int cpf;
	endereco endCliente;
	string telefone;
	string email;
	string dataNas;
	int alt;
	struct Cliente *dir;
	struct Cliente *esq;
};
cliente *raCli = NULL;
struct fornecedor {
	string cnpj;
	string nomeFan;
	string end;
	int telefone;
	string email;
	int alt;
	fornecedor *dir;
	fornecedor *esq;
};
fornecedor *raFor = NULL;
struct produto {
	int codProduto;
	string nome;
	int quant;
	fornecedor prod;
	int alt;
	produto *dir;
	produto *esq;
};
produto *raPro = NULL;
struct venda {
	int codVenda;
	vendedor ven;
	cliente ven;
	produto ven;
	string data;
	int alt;
	venda *dir;
	venda *esq;
};
venda *raVen = NULL;
//int altura(arv *r);

#endif