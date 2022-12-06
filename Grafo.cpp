#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include "MeuGrafo.h"
#include <ctype.h>
using namespace std;

// Estrutura de armazenamento das cidade que ir�o compor o grafo.
struct Cidade
{
	char nome[15];
	int visitado;
};

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	/* "eh_ponderado" serve para alterar o grafo para um grafo sem o peso das distancias.
	"eh_digrafo serve para se ter a possibilidade de criar um grafo onde ele nao seja digrafo.*/
	int eh_digrafo = 1,escolha = 0,num_vertice, grau_max, eh_ponderado = 1;
	
	// Loop de inicializa��o do grafo com quantidade de vertice e n�mero maximo de arestas.
	while(escolha == 0)
	{
		system("cls");
		cout<<"-------------------------------------------------------------------------"<<endl;
		cout<<"             Informe a quantidade de vertices do grafo:"<<endl<<"->";
		cout<<"                                  ";
		cin>>num_vertice;
		cout<<"-------------------------------------------------------------------------"<<endl;
		cout<<"                   Informe o Grau maximo do grafo:"<<endl<<"->";
		cout<<"                                  ";
		cin>>grau_max;
		cout<<"========================================================================="<<endl<<endl;
		cout<<"       Seu Grafo ser� composto por "<<num_vertice<<" vertices com grau m�ximo de "<<grau_max<<"."<<endl<<endl;
		cout<<"========================================================================="<<endl<<endl;
		cout<<"Precione [1] para confirmar as informa��es ou [0] para alterar os dados:"<<endl<<"->";
		cin>>escolha;
		
		// Condi��o para invalidar op��es diferentes das pr� estabelecidas.
		while(escolha >1 || escolha < 0)
		{
			system("cls");
			cout<<endl<<"[ERRO] A op��o escolhida � invalida !"<<endl<<endl;
			system("pause");
			system("cls");
			cout<<"========================================================================="<<endl<<endl;
			cout<<"       Seu Grafo ser� composto por "<<num_vertice<<" vertices com grau m�ximo de "<<grau_max<<"."<<endl<<endl;
			cout<<"========================================================================="<<endl<<endl;
			cout<<"Precione [1] para confirmar as informa��es ou [0] para alterar os dados:"<<endl<<"->";	
			cin>>escolha;		
		}
	}
	
	// Vetor para armazenar os nomes das cidades utilizadas no grafo e matriz de adj do grafo.
	Cidade city[num_vertice];
	float Matriz_adj[num_vertice][num_vertice]={};
	
	// Inicializa��o do grafo.
	Grafo *gr = Cria_Grafo (num_vertice, grau_max, eh_ponderado);
	
	// La�o para inser��o das  cidades no grafo.
	for (int i = 0; i < num_vertice; i++)
	{
		cout<<"Informe o nome da "<<i+1<<"� cidade:";
		fflush(stdin);
		gets(city[i].nome);
	}
	
	/*//Inser��o para facilitar o teste do programa.
	Inserir_Aresta(gr, 0, 1, eh_digrafo, 1);
	Matriz_adj [0][1] = 1;
	Inserir_Aresta(gr, 1, 3, eh_digrafo, 10);
	Matriz_adj [1][3] = 10;
	Inserir_Aresta(gr, 1, 2, eh_digrafo, 22);
	Matriz_adj [1][2] = 22;
	Inserir_Aresta(gr, 2, 4, eh_digrafo, 1);
	Matriz_adj [2][4] = 1;
	Inserir_Aresta(gr, 3, 0, eh_digrafo, 33);
	Matriz_adj [3][0] = 33;
	Inserir_Aresta(gr, 3, 4, eh_digrafo, 1);
	Matriz_adj [3][4] = 1;
	Inserir_Aresta(gr, 4, 1, eh_digrafo, 1);
	Matriz_adj [4][1] = 1;*/
	
	// Inicializa��o do men� do programa.
	escolha = menu();
	while (escolha != 0)
	{
		switch (escolha)
		{
			// Inser��o de uma nova aresta no grafo.
			case 1:
			{
				// vet_cidade[grau_max*2]  recebe os valores da fun��o imprime grafo e armazena para a exibi��o dos nomes das cidades.
				int City_origem,City_destino,vet_cidade[grau_max*2];
				char N_maiusculo[15];
				float City_distancia;
				
				//Inicializando o vetor das cidades com -1.
				for (int i = 0; i < grau_max*2;i++)
					vet_cidade[i] =-1;			
				
				system("cls");
				cout<<"====================================="<<endl;
				cout<<" RELA��O DE CIDADES"<<endl;
				cout<<"====================================="<<endl;
				cout<<" ID\t\t  CIDADE"<<endl;
				cout<<"-------------------------------------"<<endl;
				
				// Exibi��o dos ID's das cidades para facilitar manipua��o.
				for(int i = 0; i < num_vertice; i++)
				{
					cout<<" "<<i<<"\t\t  "<<city[i].nome<<endl;	
				}
				cout<<"====================================="<<endl;				
	   			
				cout<<"Informe o ID da cidade origem:";
				cin>>City_origem;
				
				// Converte o nome da cidade origem para MAIUSCULO(estetico).
				for(int i = 0; i <= strlen(city[City_origem].nome); i++)
				{
					N_maiusculo[i] = (char)toupper(city[City_origem].nome[i]);
				}
					
				//Fun��o que passa as posi��es da cidade para o vet_cidade para que possa ser impresso posterior.
				Imprime_Grafo(gr,City_origem,vet_cidade);
				
				// compara��o para caso n�o haja relacionamentos.
				if(vet_cidade[0] != -1)
				{			
					cout<<endl<<"=====================================";
					cout<<endl<<" DIRE��ES PARTINDO DE "<<N_maiusculo<<endl;				
					cout<<"====================================="<<endl;
					cout<<" ORIGEM\t\t      DESTINO"<<endl;
					cout<<"-------------------------------------";

					// Exibe uma lista de relacionamentos do elemento origem j� existentes.			
					for(int i = 0; i < grau_max * 2;i+=2)
					{
						if(vet_cidade[i] == -1)
							break;
						cout<<endl<<" "<<city[vet_cidade[i]].nome;
						for(int j = strlen(city[vet_cidade[i]].nome); j < 15; j++){cout<<" ";};
						
            			cout<<"->    "<<city[vet_cidade[i+1]].nome;									
					}
					cout<<endl<<"====================================="<<endl;
				}						
				
				cout<<endl<<"Informe o ID da cidade destino:";
				cin>>City_destino;
				cout<<endl<<"Informe a distancia entre as duas cidades:";
				cin>>City_distancia;
				
				system("cls");
				
				// Exibi��o dos dados da nova aresta inserida.
				cout<<"Foi inserido uma nova dire��o partindo de "<<city[City_origem].nome<<" com destino � "<<city[City_destino].nome;
				cout<<" e este caminho possui uma distancia de "<<City_distancia<<"Km."<<endl<<endl;
				
				// Fun��o de inser��o de Aresta.
				Inserir_Aresta(gr, City_origem, City_destino, eh_digrafo,City_distancia);
				
				Matriz_adj[City_origem][City_destino] = City_distancia;
				
				system("Pause");
				break;				
			}
			
			// Exibi��o de todos os relacionamentos do grafo.
			case 2:			
			{
				/* vet_cidade[(grau_max*2)*num_vertice]  recebe os valores da fun��o imprime_relacoes e armazena 
				dados para a exibi��o de todos os relacionamentos presentes no grafo.*/
				int City_origem,City_destino,vet_cidade[(grau_max*2)*num_vertice];
				
				//Inicializando o vetor das cidades com -1
				for (int i = 0; i < (grau_max*2)*num_vertice;i++)
					vet_cidade[i] =-1;	
					
				Imprime_Relacionamentos(gr,vet_cidade);			
				
				system("cls");
				
				cout<<"=====================================";
				cout<<endl<<" LISTA DE RELA��ES ENTRE CIDADES "<<endl;				
				cout<<"====================================="<<endl;
				cout<<" ORIGEM\t\t      DESTINO"<<endl;
				cout<<"-------------------------------------";				
					
				// Exibe uma lista de todos relacionamentos j� existentes no grafo.
				for(int i = 0; i < (grau_max*2)*num_vertice;i+=2)
				{
					if(vet_cidade[i] == -1)
						break;
						
					cout<<endl<<" "<<city[vet_cidade[i]].nome;
					
					for(int j = strlen(city[vet_cidade[i]].nome); j < 15; j++){cout<<" ";};
					
	            	cout<<"->    "<<city[vet_cidade[i+1]].nome;					
				}
				
				cout<<endl<<"====================================="<<endl<<endl;			
				system("pause");
				break;
			}	
			
			// Remover uma aresta do grafo.				
			case 3:
			{						
				int City_origem,City_destino,vet_cidade[grau_max*2];
				char N_maiusculo[15];
				
				//Inicializando o vetor das cidades com -1
				for (int i = 0; i < grau_max*2;i++)
					vet_cidade[i] =-1;				
				
				system("cls");							
				cout<<"====================================="<<endl;
				cout<<" RELA��O DE CIDADES"<<endl;
				cout<<"====================================="<<endl;
				cout<<" ID\t\t  CIDADE"<<endl;
				cout<<"-------------------------------------"<<endl;
				
				// Exibi��o dos ID's das cidades para facilitar manipua��o.
				for(int i = 0; i < num_vertice; i++)
				{
					cout<<" "<<i<<"\t\t  "<<city[i].nome<<endl;	
				}
				
				cout<<"====================================="<<endl;				
	   			
				cout<<"Informe o ID da cidade que ter� uma aresta removida:";
				cin>>City_origem;
				
				// Converte o nome da cidade origem para MAIUSCULO(estetico).
				for(int i = 0; i <= strlen(city[City_origem].nome); i++)
				{
					N_maiusculo[i] = (char)toupper(city[City_origem].nome[i]);
				}	
				
				//Fun��o que passa as posi��es da cidade para o vet_cidade para que possa ser impresso posterior.
				Imprime_Grafo(gr,City_origem,vet_cidade);
				
				if(vet_cidade[0] != -1)
				{				
					cout<<endl<<"=====================================";
					cout<<endl<<" DIRE��ES PARTINDO DE "<<N_maiusculo<<endl;				
					cout<<"====================================="<<endl;
					cout<<" ORIGEM\t\t      DESTINO"<<endl;
					cout<<"-------------------------------------";
					
					// Exibe uma lista de relacionamentos do elemento origem j� existentes.
					for(int i = 0; i < grau_max * 2;i+=2)
					{
						if(vet_cidade[i] == -1)
							break;
							
						cout<<endl<<" "<<city[vet_cidade[i]].nome;
						
						for(int j = strlen(city[vet_cidade[i]].nome); j < 15; j++){cout<<" ";};
						
	            		cout<<"->    "<<city[vet_cidade[i+1]].nome;								
					}
					
					cout<<endl<<"====================================="<<endl;
				}
				else
				{
					system("cls");
					cout<<"N�o existe nenhuma rela��o partindo da cidade "<<N_maiusculo<<endl<<endl;
					system("pause");
					break;	
				}	
				
				cout<<endl<<"Informe o ID da cidade destino:";
				cin>>City_destino;
				
				Remover_Aresta(gr,City_origem, City_destino, eh_digrafo);
				
				system("cls");
				cout<<"Foi removido o caminho que partia de "<<city[City_origem].nome<<" com destino a "<<city[City_destino].nome<<"."<<endl<<endl;
				
				Matriz_adj[City_origem][City_destino] = 0;
			
				system("Pause");
				break;
			}
			
			// Menor caminho possivel Djkistra.	
			case 4:
			{
				int City_origem,City_destino,i,anterior[num_vertice]={};
				char N_maiusculo[15];
				float distancia[num_vertice]={};
				
				// zera todos os elementos da struct city para evitar erros.
				for(int i = 0; i < num_vertice;i++)
					city[i].visitado = 0;		
				
				system("cls");
				cout<<"====================================="<<endl;
				cout<<" RELA��O DE CIDADES"<<endl;
				cout<<"====================================="<<endl;
				cout<<" ID\t\t  CIDADE"<<endl;
				cout<<"-------------------------------------"<<endl;
				
				// Exibi��o dos ID's das cidades para facilitar manipua��o.
				for(int i = 0; i < num_vertice; i++)
				{
					cout<<" "<<i<<"\t\t  "<<city[i].nome<<endl;	
				}
				
				cout<<"====================================="<<endl;				
	   			
				cout<<"Informe o ID da cidade origem:";
				cin>>City_origem;
				
				// Converte o nome da cidade origem para MAIUSCULO(estetico).
				for(int i = 0; i <= strlen(city[City_origem].nome); i++)
				{
					N_maiusculo[i] = (char)toupper(city[City_origem].nome[i]);
				}
				
				Menor_Caminho_Grafo(gr,City_origem, anterior, distancia);
				
				system("cls");
				
				cout<<"=====================================================";
				cout<<endl<<"   DISTANCIAS PARTINDO DA CIDADE "<<N_maiusculo<<endl;				
				cout<<"====================================================="<<endl;
				cout<<" ORIGEM\t\t      DESTINO\t\t   DISTANCIA"<<endl;
				cout<<"-----------------------------------------------------";
				
				// Imprime os menores caminhos partindo da cidade escolhida como origem.
				for(i = City_origem; i < num_vertice; i++)
				{	
					if(i != City_origem)
					{
						if(city[i].visitado == 1)
							break;
						else
						{
							cout<<endl<<" "<<city[City_origem].nome;
							
							for(int j = strlen(city[City_origem].nome); j < 15; j++){cout<<" ";};
								
							cout<<"->    "<<city[i].nome;
									
							for(int j = strlen(city[i].nome); j < 15; j++){cout<<" ";};
								if(distancia[i] == -1)	
									cout<<"  =   UNDEFINED"<<endl;				
							else
								cout<<"  =   "<<distancia[i]<<"Km"<<endl;
						
							city[i].visitado++;
						}	
					}
					if(i == num_vertice -1 && city[0].visitado == 0)
						i=-1;				
				}	
				
				cout<<"====================================================="<<endl<<endl;			
				
				system("pause");
				break;
			}
			case 5:
			{
				int i = -1, j = 0;
				system("cls");
				
				cout<<" MATRIZ DE ADJACENCIA:"<<endl;
				
				// Fechamento Superior da matriz.
				for(int x = 0; x <= num_vertice; x++)
				{
					// Condicional para espa�amento da primeira coluna.
					if(x == 0)
						cout<<"    ";
					// Condicional para preenchimento da parte superior da matriz enquanto o tamanho for menor que o num_vertice.
					else if(x < num_vertice)	
						cout<<"________";
					// Condicional para preenchimento da ultima coluna da matriz.
					else
						cout<<"_______";
				}	
				
				cout<<endl;
				
				// La�o de repeti��o para o preenchimento da matriz, controlador de linhas.			
				for(i = -1; i < num_vertice;i++)
				{
					// Condicional para impress�o da coluna de orienta��o.
					if(i != -1)
						cout<<" "<<i<<" |";
					
					// La�o de repeti��o para o preenchimento da matriz, controlador de colunas.	
					for(j = 0; j < num_vertice;j++)
					{
						// Condicional para alinhamento da primeira coluna da linha de orienta��o.
						if(i == -1 && j == 0)
							cout<<"   |";
							
						// Condicional para preenchimento da linha de orienta��o.
						if(i == -1)
							cout<<"   "<<j<<"   |";											
							
						// Condicional caso n�o haja caminhos entre as cidades			
						else if(Matriz_adj[i][j] == 0)
							cout<<"   -   |";
							
							// Condicional caso a distancia seja menor que 10
							else if(Matriz_adj[i][j] < 10)
							{
								printf("%.1fKm  |",Matriz_adj[i][j]);
							}
								
								// Condicional para caso a distancia seja maior que 1000							
								else 
									printf("%.1fKm |",Matriz_adj[i][j]);													
					}
					
					// Bloco condicional para impress�o da lista de rela��o.
					if(i == -1 && j == num_vertice)
							cout<<"\t RELA��ES DA MATRIZ:";						
					else if(j == num_vertice)	
						cout<<"\t "<<i<<" = "<<city[i].nome;	
						
					// Condi�ional de alinhamento da segunda linha da matriz inserindo as divisorias da matriz.
					if(i == -1)
					{
						cout<<endl;
							
						for(int x = 0; x <= num_vertice; x++)
						{
							if(x == 0)
								cout<<"---|";
							else	
								cout<<"-------|";
						}	
							cout<<endl;
					}					
					
					// Condicional de alinhamento da matriz enquanto for menor que num_vertice -1.
					else if(i < num_vertice - 1)
					{
						cout<<endl;
							for(int x = 0; x <= num_vertice; x++)
							{
								if(x == 0)
									cout<<"���|";
								else	
									cout<<"�������|";
							}	
							cout<<endl;
					}
					
					// Condicional de alinhamento da ultima linha da matriz.
					else 
					{
						cout<<endl;
						
						for(int x = 0; x <= num_vertice; x++)
						{
							if(x == 0)
								cout<<"����";
							else if(x < num_vertice)	
								cout<<"��������";
								else
									cout<<"�������";
						}
								
						cout<<endl;
					}
				}
				
				cout<<endl<<endl<<endl;			
				system("pause");
				break;
			}	
		}
		escolha = menu();	
	}	
	
	// Libera todos os Elementos do grafo alocado na memoria antes de finalizar o programa.
	Libera_Grafo(gr);
	
}

