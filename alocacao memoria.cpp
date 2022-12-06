#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main (){
	char * nome;
	nome=(char*) malloc (sizeof(char));
	cout<<"\n - > informe um nome: ";                                                    
	
	if(nome==NULL)
	{
		cout<<"\n memoria insuficiente";
		exit(1);
	}
	cout <<"\n nome:"<<nome;
	free(nome);
	
	return 0;
}


