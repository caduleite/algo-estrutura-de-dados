#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main ()
{
	setlocale(LC_ALL,"Portuguese");
	
	FILE *f;
	char arquivo[20],c = 'a',frase[100],br = '\n';
	int convert;
	
	cout<<"Informe o nome do arquivo que ser� aberto:";
	fflush(stdin);
	gets(arquivo);
	fflush(stdin);
		
	f = fopen(arquivo,"rb");
	
	// Teste de abertura do arquivo
	if (f == NULL)
	{
		cout<<"Erro na abertura do arquivo."<<endl;
		system("pause");
		exit(1);
	}
	
	system("cls");
	
	cout<<"========================================="<<endl;
	cout<<"  O conte�do do arquivo Criptografado �:"<<endl;
	cout<<"========================================="<<endl;
	
	// Impress�o do texto decodificado
	while (!feof(f))
	{
		c = fgetc(f);
		convert = ((int) c)-1;
		if( c != EOF)
		cout<<(char)convert;
	}	
	
	fclose(f);
	
	cout<<endl<<endl;
	system("pause");
	system("cls");
	
	f = fopen(arquivo,"ab");
	
	// Teste de abertura do arquivo
	if (f == NULL)
	{
		cout<<"Erro na abertura do arquivo."<<endl;
		system("pause");
		exit(1);
	}
	
	cout<<"Informe uma frase para ser implementada no arquivo:";
	fflush(stdin);
	gets(frase);
	fflush(stdin);
	
	// Quebra de linha antes da inser��o do novo conteudo.
	br = (int) br +1;
	fputc((char)br,f);
	
	// Inser��o do novo conte�do codificado.
	for(int i =0;i < strlen(frase);i++)
	{
		c = frase[i];
		convert = ((int) c)+1;
		fputc(((char)convert),f);
	}
	
	fclose(f);
	system("cls");
	cout<<"A frase:"<<frase<<" foi inserida com sucesso no arquivo!";
	
}
