#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;
//struct com funcao
		
    struct carro{
    	
    	string nome;
    	string cor;
    	int ano;
    	int velocidade;
    	string fabricante;
    	
    	void insere(string stnome,string stcor,int stano,int stveloc,string stfabric)
		{
		nome=stnome;
		cor=stcor;
		ano=stano;
		velocidade=stveloc;
		fabricante= stfabric;
	}
		void mostra()
		{
		cout<<"\n Nome: "<<nome;
		cout<<"\n Cor: "<<cor;
		cout<<"\n Ano: "<<ano;
		cout<<"\n Velocidade: "<<velocidade;
		cout<<"\n Fabricante: "<<fabricante;
		cout<<"\n";
		}
	};
	
		int main()
		{
		carro car1,car2;
		car1.insere("march","azul",2008,120,"nissan");
		car2.insere("fox","preto",2017,180,"VW");
		
		car1.mostra();
		car2.mostra();	
		
		return 0;
} 


