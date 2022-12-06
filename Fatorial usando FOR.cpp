#include <iostream>
using namespace std;


	int main(){
	
	int fat, n;
	
	cout<<"\n- > Informe um valor para qual deseja calcular seu fatorial: ";
	cin>>n;
	
	for(fat = 1;n > 1; n = n - 1)
	fat = fat * n;
	
	cout<<"\n- > Valor de fatorial: "<< fat;

return 0;	
}


