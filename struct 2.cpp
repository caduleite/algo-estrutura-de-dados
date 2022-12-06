#include <iostream>
#include <locale.h>

using namespace std;
	
	struct carro{
		
		string nome;
		string cor;													
		int pot;
		int velmax;
	};

	int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR C");
	
	carro car1;							
	carro car2;	
	
	car1.nome="Dodge";
	car1.cor="Vermelho";														
	car1.pot=450;
	car1.velmax=350;
	
	void insere(){
		
	}
	
	cout << "Nome.............: " << car1.nome << "\n";
	cout << "Cor..............: " << car1.cor << "\n";					
	cout << "Potência.........: " << car1.pot << "\n";
	cout << "velocidade Máxima: " << car1.velmax << "\n";
return 0;
system("PAUSE>>NULL");
	}
