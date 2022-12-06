#include <iostream>

using namespace std;
	
	class No	
	{
	private:
		no *esq,*dir;
		int chave;
		
	public:
		No(int chave)
		{
			this->chave = chave;
			esq = NULL;
			dir = NULL;
		}
		
		int getChave ()
		{
			return chave;
		} 
		
		No* getEsq()
		{
			return esq;
		}
		
		No* getDir()
		{
			retur dir;
		}
		
		void setEsq(No* no) 
		{
			esq = no;
		}
		
		void setDir(No* no)
		{
			dir = no;
		}
	};
	
	
/* 												ARVORE BINARIA

Uma arvore é um grafo e um grafo por sua vez possui vestices(circulos) e arestas(setas) uma estrutura formada por vestices e 
arestas é chamada de arvore binaria. Cada vestice possui um valor que e comumente chamado de nós, o valor da vertice
1 e chamado de  nó RAIZ os valores das vertices a baixo sao chamados de FILHOS temos as sub arvores a esquerda e as sub arvores
a direita, os vestices que nao possui valores abaixo sao chamados de FOLHAS pois nao possui filhos ou seja quando um nó 
nao possui filho e chamado de nó folha.

Arvore Binaria, binario vem de 2 ou seja na arvore binaria cada NÓ pode ter no maximo 2 filhos(folhas) a varios tipos de 
arvore AVL,B e etc mas vamos focar na arvore binaria que e a duvida, e mais precisamente essa arvore binaria e chamada de 
arvore binaria de busca ou arvore binaria de pesquisa porque os elementos das sub arvores a sua esquerda sao sempre menores
que sua raiz e os elementos da sub a arvore a sua direita sao sempre maiores que sua raiz.

ARVORE BINARIA DE BUSCA

Na imagem eu tenho um NÓ tenho entao uma arvore, nossa primeira classe vai ser uma classe chamada 
NO para guadar as informcaoces de cada nó.
	
CLASS NO.
	
PRIVATE membros privados, No cada nó tem um nó a direita e um nó a esquerda ele tem um link para nó a esquerda e um para
direita, esq e o link para nó a esquerda e dir e o link para no a direita, e vou ter um valor unico chamado CHAVE, cada
nó vai guardar os atributos que voce quiser, basta declarar as suas variaveis, eu tenho PUBLIC o construtor eu passo a chave
e quando crio o no ESQ vai para NULL e DIR vai para NULL porque quando criamos ele e ele e um no folha o nó folha ele nao tem 
nó a direita e nem a esquerda, eu preciso ter um metodo para retornar a chave GETCHAVE para return(retorna) a chave, e um
metado para retonar o nó a direita e um para retornar o metodo a esuerda, e uma funcao sem retorno VOID para me setar o nó
a esquerda e outra para setar o nó a direita, com isso temos nossa classe NO.
\*
