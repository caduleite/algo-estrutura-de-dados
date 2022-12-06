#include <iostream>
#include <stack>

using namespace std;

//pilha o ultimo elemento a ser enserido sera o primeiro a ser retirado!
	int main(){
		
		stack <string> cartas;
		//criando e enseriando elementos na pilha
		cartas.push("Rei de copas");
		cartas.push("Rei de espadas");
		cartas.push("Rei de ouro");
		cartas.push("Rei de paus");
		
		cout<<"\n - > Tamanho da pilha: "<<cartas.size();"\n";
		
		cout<<" Carta :"<<cartas.top();
		cartas.pop();
		
		cout<<"\n - > Nova carta do topo: "<<cartas.top();
		
		
		return 0;
		
	}
