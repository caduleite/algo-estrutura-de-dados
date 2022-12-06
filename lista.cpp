#include <iostream>
#include <locale.h>
#include <list>
#include <iterator>
using namespace std;
int menu()
{
	int escolha;
	do{
		system("cls");
		cout<<"Escolha uma das op��es Abaixo:"<<endl;
		cout<<"[1] Exibir a lista"<<endl<<"[2] Inserir elemento"<<endl<<"[3] Remover elemento"<<endl<<"[4] Exibir elemento"<<endl;
		cout<<"[5] Exibir posi��o"<<endl<<"[6] Esvaziar a lista"<<endl<<"[7] Sa�r"<<endl<<"Informe sua escolha:";
		cin>>escolha;
		fflush(stdin);
	}while(escolha < 1 ||escolha > 7);
	return escolha;
}
int main ()
{
//Declara��o de variaveis
	setlocale(LC_ALL,"Portuguese");
	list<int>num;
	list<int>::iterator it;
	int escolha,insere,posicao,cont;

//inicio programa	
	escolha = menu();
	while(escolha!=7)
	{
		switch(escolha)
		{
		//Exibir lista
			case 1:
				system("cls");
				it=num.begin();	
				if(num.empty())
					cout<<"A lista esta vazia!"<<endl<<endl;
				else
				{
					cout<<"A Lista � composta por "<<num.size()<<" elementos e eles s�o:"<<endl;
					cont=0;
					while(cont < num.size())
					{
						cout<<"["<<*it<<"]"<<"\t";
						it++;
						cont++;		
					}
					cout<<endl<<endl;					
				}
				system("pause");
				break;
		//Inserir elementos		
			case 2:
				system("cls");	
				it=num.begin();			
				cout<<"Informe o n�mero que sera inserido:";
				cin>>insere;
				fflush(stdin);
				posicao=0;
				do
				{
					system("cls");
					if( posicao <0 || posicao > 1)
						cout<<"Op��o invalida!"<<endl;
					cout<<"Informe onde o n�mero dever� ser inserido:"<<endl<<"[0] Para inserir no inicio da lista"<<endl<<"[1] Para inserir no final da lista"<<endl<<"->";
					cin>>posicao;
					fflush(stdin);
				}while(posicao <0 || posicao > 1);
				if (posicao == 0)
				{
					system("cls");
					num.push_front(insere);
					cout<<"O n�mero "<<insere<<" foi inserido no inicio da lista"<<endl<<endl;
				}					
				else
				{	
					num.push_back(insere);
					cout<<"O n�mero "<<insere<<" foi inserido no final da lista"<<endl<<endl;					
				}								
				system("pause");
				break;
		//Remover elementos
			case 3:
				system("cls");
				it=num.begin();
				if (num.empty())
				{
					cout<<"A lista est� vazia n�o � possivel remover elementos."<<endl<<endl;
					system("pause");
					break;
				}
				else
				{
					do{
						system("cls");
						if (posicao >= num.size())
							cout<<"A posi��o inserida � invalida!"<<endl;
						cout<<"Informe qual posi��o ser� removida:";
						cin>>posicao;
						fflush(stdin);
					}while(posicao >= num.size() || posicao<0);
					advance(it,posicao);
					cout<<"O n�mero que ser� removido � "<<*it<<"."<<endl<<endl;
					num.erase(it--);	
				}								
				system("pause");
				break;
		//Exibir elemento buscando a posi��o		
			case 4:
				system("cls");
				it=num.begin();	
				cout<<"Informe a posi��o do elemento que dever� ser exibido:";
				cin>>posicao;
				fflush(stdin);
				advance(it,posicao);
				if(posicao > num.size()-1)
					cout<<"Posi��o invalida!"<<endl<<"Favor informar uma posi��o entre 0 e "<<num.size()-1<<endl<<endl;
				else
					cout<<"O n�mero localizado na posi��o "<<posicao<<" � "<<*it<<"."<<endl<<endl;
				system("pause");
				break;
			case 5:
		//Exibir posi��o buscando elemento		
				system("cls");				
				it=num.begin();
				cont=0;
				cout<<"Informe o n�mero para que seja buscada a sua posi��o:";
				cin>>insere;
				fflush(stdin);
				for (int i=0;i<num.size();i++)
				{
					if(insere == *it)
					{
						cout<<"O n�mero "<<insere<<" est� na posi��o ["<<i<<"]"<<endl;
						cont++;
					}																		
					it++;								
				}
				if (cont== 0)
					cout<<"O n�mero informado n�o est� presente na lista."<<endl<<endl;
				system("pause");
				break;
		//Esvaziar a lista		
			case 6:
				system("cls");
				do{
					system("cls");
					cout<<"Deseja que sua lista seja esvaziada?"<<endl<<"[1] sim"<<endl<<"[0] n�o"<<endl<<"->";
				cin>>escolha;
				fflush(stdin);
				}while(escolha < 0 || escolha > 1);			
				if(escolha == 0)
				{
					system("cls");
					cout<<"Sua lista n�o foi esvaziada!"<<endl<<endl;
					system("pause");	
					break;							
				}
				else
				{
					system("cls");
					while(!num.empty())
						num.pop_front();
					cout<<"Sua lista foi esvaziada com sucesso!"<<endl<<endl;
					system("pause");
					break;
				}	
		}
		escolha=menu();
	}
}
