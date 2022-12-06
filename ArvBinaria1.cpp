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

Uma arvore � um grafo e um grafo por sua vez possui vestices(circulos) e arestas(setas) uma estrutura formada por vestices e 
arestas � chamada de arvore binaria. Cada vestice possui um valor que e comumente chamado de n�s, o valor da vertice
1 e chamado de  n� RAIZ os valores das vertices a baixo sao chamados de FILHOS temos as sub arvores a esquerda e as sub arvores
a direita, os vestices que nao possui valores abaixo sao chamados de FOLHAS pois nao possui filhos ou seja quando um n� 
nao possui filho e chamado de n� folha.

Arvore Binaria, binario vem de 2 ou seja na arvore binaria cada N� pode ter no maximo 2 filhos(folhas) a varios tipos de 
arvore AVL,B e etc mas vamos focar na arvore binaria que e a duvida, e mais precisamente essa arvore binaria e chamada de 
arvore binaria de busca ou arvore binaria de pesquisa porque os elementos das sub arvores a sua esquerda sao sempre menores
que sua raiz e os elementos da sub a arvore a sua direita sao sempre maiores que sua raiz.

ARVORE BINARIA DE BUSCA

Na imagem eu tenho um N� tenho entao uma arvore, nossa primeira classe vai ser uma classe chamada 
NO para guadar as informcaoces de cada n�.
	
CLASS NO.
	
PRIVATE membros privados, No cada n� tem um n� a direita e um n� a esquerda ele tem um link para n� a esquerda e um para
direita, esq e o link para n� a esquerda e dir e o link para no a direita, e vou ter um valor unico chamado CHAVE, cada
n� vai guardar os atributos que voce quiser, basta declarar as suas variaveis, eu tenho PUBLIC o construtor eu passo a chave
e quando crio o no ESQ vai para NULL e DIR vai para NULL porque quando criamos ele e ele e um no folha o n� folha ele nao tem 
n� a direita e nem a esquerda, eu preciso ter um metodo para retornar a chave GETCHAVE para return(retorna) a chave, e um
metado para retonar o n� a direita e um para retornar o metodo a esuerda, e uma funcao sem retorno VOID para me setar o n�
a esquerda e outra para setar o n� a direita, com isso temos nossa classe NO.
\*
