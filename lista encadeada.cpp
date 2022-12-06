/* lista encadeada -  � composta de um conjunto de dados dispostos por
uma sequ�ncia de n�s, em que a rela��o de sucess�o desses
elementos � determinada por um ponteiro que indica a posi��o do
pr�ximo elemento, podendo estar ordenado ou n�o.

Uma lista encadeada � representada pleo primeiro elemento mdo tipo elemento
typedef(redefinicao de tipo)(define uma estrutura dentro da outra (funcao recursiva)) ou seja redefino a estrutura dando um nome para ela.

ponteiro 8 bytes.
int 4 bytes.

*/

#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

typedef struct elemento Elemento;			
struct elemento {
 int info;
 Elemento* prox;
};

 Elemento* cria_lista(void)				//criacao de uma lista vazia...
{
 return NULL;
}
// FUN��O INSERI ELEMENTO
// ALOCA MEM�RIA PARA ARMAZENAR O ELEMENTO
// ENCADEIA O ELEMENTO NA LISTA EXISTENTE
 Elemento* insere_item (Elemento* lst, int val)			//inserir elemento eu preciso receber a lista completa e o valor que eu quero enserir. ..
{
 Elemento* novo = (Elemento*) malloc(sizeof(Elemento));		//alocando dinamicamente espacao(12 bytes int(4 bytes) e *ponteiro(8 bytes)) na memoria para meu tipo de elemento. ..
 novo->info = val;			// O novo oponta para informAcao o valor que eu vou receber. ..
 novo->prox = lst;			// APONTEI PARA PROXIMO ELEMENTO DA LISTA. ..
 return novo;				// QUANDO EU RETORNO UM NOVO ELE RETORNA O VALOR E O PROXIMO NO DA LISTA. ..
}

void imprime_elemento (Elemento* lst)
{
 Elemento* p;
 for (p = lst; p != NULL; p = p->prox)
cout<<"\n info = "<< p->info;
}

int lst_vazia(Elemento* lst) // FUN��O VAZIA - RETORNA 1 SE VAZIA OU 0 SE N�O VAZIA
{
	return (lst == NULL);
}

// FUN��O BUSCA
// - RECEBE A INFORMA��O A PESQUISAR
// RETORNA O PONTEIRO DO N� DA LISTA QUE REPRESENTA O ELEMENTO OU NULL, SE O ELEMENTO N�O FOR ENCONTRADO
Elemento* busca_elemento (Elemento* lst, int v)
{
	Elemento* p;
	for(p=lst; p!= NULL; p=p->prox){
		if (p-> info == v)
			return p;
    }
	return NULL;   //N�O ACHOU O ELEMENTO
}

// remove um elemento da lista

Elemento* remove_item(Elemento* lst, int val)
{
	Elemento *a = NULL;  // ponteiro para um elemento anterior
	Elemento *p = lst;    // ponteiro para percorrer a lista
	
	while (p !=NULL && p-> info !=val) // procura um elemento na lista, guardando o anterior
	{
		a=p;
		p=p->prox;
	}
	if (p ==NULL) // verifica se achou o elemento
		return lst; // n�o achou retorna a lista original
	
	if (a == NULL){ // retira elemento
		lst=p->prox;  // retira elemento do in�cio
    } else
	{
		a->prox = p->prox;  // retira elemento do meio da lista
	}
	free(p);
	return lst;
}

// destroi a lista e libera todos os elementos alocados

void libera_item(Elemento* lst)
{
	Elemento *p = lst;
	while (p!= NULL){
		Elemento* t =  p->prox; // guarda referencia para o pr�ximo elemento 
	    free(p);   // libera mem�ria apontada por p
		p=t;   // faz p apontar para o pr�ximo
	}
	
}

int main (void)
{
 Elemento* lst; /* declara uma lista n�o inicializada */

 lst = cria_lista(); /* cria e inicializa lista como vazia */
 lst = insere_item(lst, 23); /* insere na lista o elemento 23 */
 lst = insere_item(lst, 45); /* insere na lista o elemento 45 */
 lst = insere_item(lst, 100); /* insere na lista o elemento 100 */
 imprime_elemento(lst);
 cout<<"\n elemento removido: ";
 lst = remove_item(lst, 45); 
 imprime_elemento(lst);
 
 if (busca_elemento(lst, 1) == NULL) {
cout<<"\n Elemento n�o encontrado";
} else {
cout<<"\n Elemento encontrado";
}
// imprime_elemento(lst);
 /* libera_item(lst);
  cout<<"\n libera a lista: ";
  imprime_elemento(lst); */

 return 0;
}

