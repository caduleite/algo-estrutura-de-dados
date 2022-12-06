// Matriz adjacente usando grafo
#include <iostream>
using namespace std;


int menu (){
	
	int opcao;
	
	do
	{
		system("cls");
		cout<<"=====================================\n";
		cout<<"- > Precione o numero da opcao desejada:\n";
		cout<<"--------------------------------------\n";
		cout<<" [1] Informa posicao da aresta.\n";
		cout<<" [2] Exibir a adjacencia da matriz.\n";
		cout<<" [3] Encerrar processo.\n";
		cout<<"======================================\n";
		cout<<"opcao";
		cin>>opcao;
	}while(opcao < 0 || opcao > 2);
		return opcao;
}

	int main () {
		
		
	// Declarando variaveis
		int indice_coluna = 65, indice_linha = 65; //iniciando com A
		int vertice,opcao,linha,coluna;
		
	// Recebendo vertices
		cout<<"- > Informe a quantidade de vertices: ";
		cin>>vertice;
	// Declarando matriz
		int MatrizGrafo[vertice][vertice] = {}; // Matriz sem definicao de tamanho inicial
	// Inicializar Matriz com 0 inicialmente
		cout<<endl<<"- > A Matriz adjacente tera a seguinte forma: "<<endl<<endl;
		
		for(int i = -1; i < vertice; i++)
		{
			if(i >=0)
			{
				cout<<char(indice_linha);
				indice_linha++;
			}
		for(int C = 0 ; C < vertice ; J++)
		{
			if(i == -1)
			{
				cout<<"    "<<(char)indice_coluna;
				indice_coluna++
			}
		}
		else
		{
			if(C == 0)
				cout<<"   "<<MatrizGrafo[L][C];
			else
				cout<<"   "<<MatrizGrafo[L][C];
		}
		
	}
	cout<<endl;
}
cout<<endl<endl;
	system("pause");
	system("cls");
	
// Inicializacao do menu
	opcao = menu();
	while (opcao != 0)
	{
		switch (opcao)
		{
			
		// [1] - Para informar a posicao da aresta.
		case 1:
			system("cls");
			cout<<"- > Informe a linha do vertice: ";
			cin>>linha;
			
			cout<<"- > Informe a coluna do vertice: ";
			cin>>coluna;
			
			linha--;
			coluna--;
			
			if(linha < vertice && coluna < vertice)
			{
				system("cls");
				MatrizGrafo[linha][coluna] = 1;
			cout<<endl<<"- > Posicao foi alterada!"<<linha+1<<" X "<<coluna+1<<endl<<endl;
			}
			else
			{
				system("cls");
				cout<<endl<<"- > Posicao informada e invalida!"<<endl<<endl;
			}
			system("pause");
			break;
		// [2] - Exobir a adjacencia da Matriz
			case 2:
				system("cls");
				indice_linha = 65;
				indice_coluna = 65;
			for(int i = -1; i < vertice; i++)
			{
				if(i >= 0)
				{
					cout<<char(indice_linha);
					indice_linha++;
				}
			for(int C = 0; C < vertice; C++)
			{
				if (i == -1)
				{
					cout<<"   "<<(char)indice_coluna;
					indice_coluna++
				}
				else
				{
					if (C == 0)
						cout<<"   "<<MatrizGrafo[L][C];
					else
						cout<<"   "<<MatrizGrafo[L][C];
				}
			}
			cout<<endl;
			}
			cout<<endl<<endl;
			system("pause");
			break;;
		}
	}
	opcao = menu();
}


