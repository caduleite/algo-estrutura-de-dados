#include<iostream>
#include<cstdlib>
#include<conio.h>
#include <stdio.h>

#define MaxTam 100

using namespace std;

typedef int Apontador;

struct TipoItem
{
	int Codigo;
	char Nome[10];
};

struct TipoPilha
{
	TipoItem Item[MaxTam];
	Apontador Topo;
};

void FazPilhaVazia (TipoPilha &Pilha)
{
	Pilha.Topo = -1;
}

int PilhaVazia (TipoPilha &Pilha)
{
	return (Pilha.Topo = -1);
}

void Empilhar (TipoItem X, TipoPilha &Pilha)
{
	if(Pilha.Topo == MaxTam)
	{
		cout<<"Pilha Cheia";
	}
	else{
		Pilha.Topo++;
		Pilha.Item [Pilha.Topo] = X;
	}
}

void Desempilhar (TipoPilha &Pilha, TipoItem X)
{
	system("CLS");
	if(PilhaVazia(Pilha))
	{
		cout<<"Pilha esta vazia!";
		//Item.Codigo = -1;
	}
	else{
	//	Item = Pilha.Item[Pilha.Topo];
		Pilha.Topo --;
	}
}

int TamanhoPilha(TipoPilha &Pilha)
{
	return (Pilha.Topo + 1);
}


int Menu()
{ int opcao=5;
do{
	system("CLS");
	cout<<"\n Escolha uma opcao:";
	cout<<"\n 1 - Empilhar	:";
	cout<<"\n 2 - Desempilhar:";
	cout<<"\n 3 - Verificar Tamanho da Pilha:";
	cout<<"\n 0 - Sair:";
	cout<<"\n Opcao:";
	cin>>opcao;
	} while (opcao< 0 || opcao >3);
	return opcao;

}

int main(){
   TipoPilha Pilha;
   TipoItem Aux;
   int Opcao;
   
   FazPilhaVazia(Pilha);	
   	
	Opcao = Menu();
	while (Opcao!=0){
		
		switch (Opcao){
			
			case 1:
					system("CLS");
					cout<<"\n Inserir Item: ";
					cout<<"\n Inserir um Codigo: ";
					cin>>Aux.Codigo;					
					fflush(stdin);
					cout<<"\n Digite um nome: ";
					gets(Aux.Nome);
					
					Empilhar(Aux, Pilha);
					break;
				
				case 2:
					system("CLS");
					cout<<"\n Excluir Item: ";
				
					
					Desempilhar(Pilha, Aux);
					
					if (Aux.Codigo > 0){
						
						cout<<"\n O item a seguir foi removido:";
						cout<<"\n Codigo: "<< Aux.Codigo;
						cout<<"\n Nome: "<< Aux.Nome;
					}
					fflush(stdin);
					getchar();							
					break;
				
				case 3:
					system("CLS");
					cout<<"\n Pilha: ";
						
					cout<<"\n Quantidade de Itens na Pilha: "<< TamanhoPilha(Pilha);
					
					fflush(stdin);
					getchar();							
				}
				Opcao = Menu();
	}
return 0;	
}


