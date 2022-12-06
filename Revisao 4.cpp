#include <iostream>

using namespace std;
//exercicio numero 1
int main () {
	
	float*aluno;
	int qntd;aluno;soma=0;cont=0;
	cout<<"\n - > Informe a quantidade de alunos da turma: ";
	cin>>qntd;
	aluno=(float*)malloc(sizeof(float)*qntd+1);			//A funcao malloc retorna o tipo de dado void ou seja sem valor.
	while(cont<qntd)
	{
		cout<<"\n - > Informe a nota do"<<cout + 1<<"O aluno";
		cin>>aluno[cont];
		cont++
		soma+=[cont];
		cont++;
	}
	cout<<soma/qntd;
	free(aluno);
return 0;
}
