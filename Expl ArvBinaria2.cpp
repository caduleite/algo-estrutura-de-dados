#include <iostream>

using namespace std;


class Arvore
	{
		private:
		no* raiz;
		
		public:
		Arvore () 
		{
			raiz = NULL;
		}
		
		void inserir (int chave) 
		{
			if(raiz == NULL)
				raiz == new No(chave);
			else
				enserirAUX(raiz, chave);
		}
		
		void enserirAUX(No* no, int chave)
		{
			if(chave < no>-getChave())
			{
				if(no->getEsq() == NULL) 
				{
					No* novo_no == new No(chave);
					no->setEsq(novo_no);
				}
				else
				{
					inserirAUX(no->getEsq(), chave);
				}
				else if(chave > no->getChave());
				{
					if(no->getDir() == NULL)
					{
						No* novo_no == new No(chave);
						no->setDir(novo_no); 
					}
					else
					{
						inserirAUX(no->getDir(), chave);
					}
			}
		}
		
	No* getRaiz()
	{
		return raiz;
	}
	
	void emOrdem(No* no)
	{
		if(no != NULL)
		{
			emOrdem(no->getEsq());
			cout << no->getchave() << " ";
			emOrdem(no->getDir());
			cout << no->getEsq() << " ";
		}
	}
	};
	
	main (int argc, char *argv[]) {
		
	arvore arv;
	
	arv.inserir(8);
	arv.inserir(10);
	arv.inserir(14);
	arv.inserir(13);
	
	arv.inserir(3);
	arv.inserir(1);
	arv.inserir(6);
	arv.inserir(4);
	arv.inserir(7);
	cout<<"- > Percorrendo em ordem...\n";
	arv.emOrdem(arv.getRaiz());
	return 0;
	}
	
	/* 											CLASSE ARVORE
	
	Essa classe possui um menbro privado (private) chamdo de raiz, tenho um construtor Public quando eu crio a arvore a
	raiz e nula (NULL), tenho uma funcao para inserir para insereimos passamos a chave essa chave e unica, se a raiz for 
	igual a NULL que dizer que a raiz esta vazia, if( raiz == NULL), entao crio um novo nó passando a chave, raiz == new 
	NO(chave); se ela nao estiver vazia crio uma funcao enserirAUX onde eu passo a raiz ou seja eu vou comecar da raiz 
	para verificar onde eu tenho que inserir o nó e passo a chave, implemento a funcao inserir AUX com retorno VOID(sem retorno)
	essa funcao enserirAUX vai ser uma funcao recursiva ou seja voce pode chamar ela varias vezes que precisar, se a chave for
	menor que a chave do nó corrente verifico se possui nó a esquerda (esq) se nao tiver (NULL) eu vou criar um novo nó, e setamos
	o nó a esquerda porque criamos um nó ali, so relembrando que em uma arvore binaria de busca os elementos a esquerda sao 
	menos que a raiz e os elementos da direita sao menores que a raiz, se o nó corrente tiver elemento a esquerda ter que continuar
	a busca desse nó a esquerda, por isso que passo a funcao recursivamente, se a chave for maior que nó corrente enserimos a direita,
	mais antes verifico se tem nó a direita, se nao tiver criu um novo nó e setamos um nó a direita que e o novo nó, se nao for
	maior ou menor é porque é igual entao nao vamos inserir porque nesse caso a chave e unica, faco uma funcao para retornar a raiz
	return raiz; e vou criar uma funcao para percorrer ela em ordem, em ordem percorremos primeiro a sub arvore a ESQUERDA, depois
	a RAIZ e depois a SUB ARVORE a DIREITA, isso seguindo a teoria da recursividade, na minha funcao principal (main) crio Arv para
	inserir os elemntos arvore.inserir o . chama a funcao enserir, chamo a funcao EmOrdem passando a raiz comecando pela raiz.
	
