/* lista duplamente encadeada -  nesse tipo de
estrutura de dados cada n� possui um elemento com informa��es,
um ponteiro para seu pr�ximo elemento e um ponteiro para seu
elemento anterior. Dessa forma, � poss�vel acessar tanto o pr�ximo elemento como
o elemento anterior da lista, percorrendo-a tamb�m na ordem
inversa, do final at� o in�cio. O primeiro elemento aponta para
seu anterior NULL (valor nulo), assim como o ponteiro do �ltimo
elemento da lista
tr�s campos:
� um campo-elemento para a informa��o;
� um ponteiro direcionando para o pr�ximo elemento;
� um ponteiro direcionando para o elemento anterior.
Quando voce recebe uma variavel e nao passa valor ela gera lixo.*/

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct lista {		//Estrutura chamada lista.
	int info;
	struct lista* ant;	//Ponteiro aponta para antecessor.
	struct lista* prox;	//Ponteiro aponta para sucessor.
};
typedef struct lista Lista; //Renomei minha lista para lista com l maiusculo.

/* Fun��o para retornar uma lista vazia */
Lista* inicializar (void)
{
	return NULL; // nao tem nenhum elemento.
}

/*inser��o de um novo elemento no in�cio da lista*/
Lista* inserir (Lista* l, int i) {	//informe os lementos que eu tenho na lista e elemento que eu quero inserir
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo -> info = i;//recebe o valor atribuido.
	novo -> prox = l;//aponto para proximo elemento da lista.
	novo -> ant = NULL;//recebe NULL.
	
	//Verifica se a lista n�o est� vazia
	if (l != NULL)
	   	l -> ant = novo;// o elemento anterior da lista aponta para NULL.
	return novo;//retorno o novo elemento na lista encadeada.
}

/*adi��o em uma posi��o da lista*/
Lista* inserirPosicao(Lista* l, int pos, int v){
	int i, cont = 1;
	Lista *p = l;
	Lista* novo = (Lista*)malloc(sizeof(Lista));
	Lista* temp = (Lista*)malloc(sizeof(Lista));
	
	while (cont != pos){
		p = p -> prox;
		cont++;
	}
	novo -> info = v;//meu novo elemento recebe a informcao com valor.
	temp = p -> prox;
	p -> prox = novo;//o ponteiro pro proximo.
	novo -> ant = p;//o meu novo elemento recebe o ponteiro do antecessor.
	novo -> prox = temp;//e o meu novo ponteiro do proximo aponta para meu novo elemento.
	temp -> ant = novo;//
	return l;//retorno a minha lista toda.
}

/*adicionarmos no final da lista*/
Lista* inserirFim(Lista* l, int v){//passo como parametro a lista e ovalor que eu quero enserir na lista.
	int cont = 1;// tenho um contador que recebe o valor.
	Lista *p = l;//um ponteiro com uma lista com valor l.
	Lista* novo = (Lista*)malloc(sizeof(Lista));//aloco espaco para um novo elemento para inserir um novo elemento.
	while (p -> prox != NULL) {//pego o proximo elemento.
		p = p -> prox;//se for NULL aponto para proximo elemento.
		cont++;//incremento 1.
	}
	novo -> info = v;
	novo -> prox = NULL;
	novo -> ant = p;
	p -> prox = novo;
	return l;
}

/*Busca elementos
permite remover um elemento da lista duplamente ligada
apenas conhecendo o ponteiro para esse elemento. Para facilitar
a localiza��o de um elemento na lista, podemos utilizar a fun��o
de busca e, em seguida, ajustar o encadeamento da lista, por fim,
liberando o elemento da aloca��o de mem�ria. Assim, encontrado o elemento que se deseja remover, basta
apontar o anterior para o pr�ximo e o pr�ximo para o anterior,
permitindo que o elemento no meio da lista possa ser removido do
encadeamento.*/

Lista* busca(Lista* l, int v){//passo todos os elementos da minha lista e o elemento que quero buscar
	Lista* p;
	for (p = l; p != NULL; p = p -> prox) {//p recebe o tamanho da lista,execute ate que meu P seja NULL,e cada vez que eu executa eu passo para proximo elemento da lista.
		if (p -> info == v)//pego o conteudo de cada celula
		return p;//retorno o valor procurado se eu encontrei.
	}
	return NULL;
}

/*Remover elementos*/
Lista* retira (Lista* l, int v) {//passo minha lista e passo o valor que eu quero retirar
	Lista* ant = NULL; 
	Lista* p = l;
	while (p != NULL && p -> info != v) {//execute enquanto meus ponteiros for diferente de nulo e ao mesmo informcao seja diferente.
		ant = p;//anteiror recebe ponteiro.
		p = p -> prox
	}
	if (p == NULL )//ponteiro e igual a NULL.
	   	return l;
	if (ant == NULL) {//elemento anterior e igual a NULL.
		l = p -> prox;
	}
	else
	{
		p -> ant -> prox = p -> prox;//ponteiro que aponta para anterior que aponta para proximo elemento eu aponto para proximo..
	}
	if (p -> prox != NULL)//se meu ponteiro no proximo e diferente de NULL.
	   	p -> prox -> ant = p -> ant;//entao meu ponteiro que aponta para proximo que por sua vez aponta para anteiror eu aponto para anterior.
	
	//free(p);//liberei a memoria;
	
	return l;//retorno a lista sem o elemento que acabei de remover.
}

/*Ordena��o da lista
a ordena��o da lista pode ser de forma crescente ou decrescente, criando uma
simples compara��o entre os elementos e realizando a sua troca,
em caso de aceitarem a condi��o de maior ou menor*/

void Ordena(Lista* l){//passo a minha lista
	Lista* p;//um ponteiro que aponta para lista.
	Lista* aux;// e um pontiro para minha variavel aux.
	int temp;
	for (p = l; p != NULL; p = p -> prox) {//executo ate que meu ponteiro seja diferente de NULL.
		for (aux = p -> prox; aux != NULL; aux = aux -> prox) {// cada vez que eu excutar eu pego o proximo elemento da lista.
			if ((p -> info) > (aux -> info)) {//se a informcao do meu ponteiro ela e maior que a informcao que esta armazenada em minha auxiliar.
			temp = p -> info;//temporaria recebe variavel de informaco.
			p -> info = aux -> info;
			aux -> info = temp;//aux recebe o conteudo da minha variavel temporario temp.
			}
		}
	}
}

/*Imprime lista*/
void imprimir(Lista* lst)
{
 Lista* p;
 for (p = lst; p != NULL; p = p->prox)
 cout<<"\n info = "<< p->info;
}

/*Programa Principal*/
int main() {
	Lista* listaFinal;//chamei a minha lista
	listaFinal = inicializar();//inicializei a minha lista
	listaFinal = inserir(listaFinal, 68);//passando os valores.
	listaFinal = inserir(listaFinal, 89);//passando os valores.
	listaFinal = inserir(listaFinal, 41);//passando os valores.
	listaFinal = inserirFim(listaFinal, 14);//passando os valores.
	cout<<"Lista: \n";
	imprimir(listaFinal);
	listaFinal = retira(listaFinal, 68);//chamei a minha funcao de retirar a lista retirando o 68.
	listaFinal = inserirPosicao(listaFinal, 1, 79);//inserir o elementos 1 e 79.
	imprimir(listaFinal); /* imprime a lista */
	cout<<"\n";
	cout<<"\n Lista Ordenada";
	Ordena(listaFinal);
	imprimir(listaFinal);
	cout<<"\n";
	return 0;
}

/*ordenacao de numeros para ordenar eu preciso fazer uma comparacao.
preciso de uma variavel auxliar.

	if(num>prox)
	{
		aux=num;// crio uma variavel auxiliar que recebe o num.
		num=prox;// o num recebo o prox.
		prox=aux;// o prox receb aux.
	}
	
Algoritmo de ordenacao eficaz ?
	
