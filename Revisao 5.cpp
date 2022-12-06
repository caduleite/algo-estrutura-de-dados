#include <iostream>

using namespace std;
//exercicio de ponteiro.
int main () {
	
	int x,*p1;  //duas variaveis "x" e p1
	p1=& x;		//atribui o endereco de x x por sua vez nao tem nenhum valor
	*p1=10;		// peguei o endereco do ponteiro que por sua vez e o memso que do x.

	cout<<*p1;		//exiba 10.
	cout<<x;		//exiba 10.

return 0;
}
