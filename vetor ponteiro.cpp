#include <iostream>

using namespace std;
//atividade 2 ponteiros.
	// O ponteiro é um tipo de dado que
	// Aponta para outra variavel do mesmo tipo.
	// Vetor com Ponteiro.
	// O endereco de um ponteiro e sequecial.
	// A cada inteiro 4 bytes.

	int main(){
		
		int *p, vet[10];
		p=&vet[0];
		
		*p=10;  // 1° Posicao.
		*p++;  // incrementando a posicao do vetor.
		*p=20; // 2° Posicao.
		
		cout<<"\n"<<*p;  //valor do meu ultimo endereco 20.
		cout<<"\n"<<vet[0]; // valor de enereco 10.
		cout<<"\n"<<vet[1]; // valor endereco 20.
		cout<<"\n"<<p;		//endereco.
		
		for(int i=0; i<10;i++)
		
		p=&vet[i];
		
		cout<<"\n"<<p;
		
		
		return 0;
		
	}
