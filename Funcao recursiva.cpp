#include <iostream>
#include<stdlib.h>

using namespace std;
	
	
	void troca(int a,int b)
	{
		int temp;
		temp=a;
		a=b;
		b=temp;
	}
	int main()
	{ int a=2,b=3;
	cout<<"\n - > Antes da funcao: "<< a <<b;
	troca(a,b);
	cout<<"\n - > Depois da funcao: "<<	a <<b;
return 0;
system("PAUSE>>NULL");
	}
