#include <iostream>

using namespace std;

	//Enserir elementos na lista de uma lista ja preenchiada.
	int main () {
		
		cout<<"\n Informe o numero que sera busacado na lista: ";
		cin>>num;
		cout<<"\n - > Informe a posicao: ";
		cin>>pos;
		it=lista.begin();		//volto o ponteiro para a posicao 2.
		advance(it,pos);		// avanca para proxima posicao.
		lista.insert(num);		// Vai enseri o elemento 8 na posicao 2, ele desloca os elementos.
return0;
	}
