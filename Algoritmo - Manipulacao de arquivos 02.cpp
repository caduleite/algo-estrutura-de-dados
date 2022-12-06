#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

typedef struct Fapbetim;

struct fapbetim {
  
  int ativo;
  char nome[50];
  char cpf[11];
	
}; 
void flush_in();
void criar_arquivo();
void insere_nome();
void insere_matricula();
void insere_sexo();
void listar();
void editar();


// - > Manipulação de Arquivo TXT

	/*int main (void) {
		
	FILE *Arquivo;
	Arquivo = fopen("AlunosFap2019.txt","w");
	fprintf(Arquivo,"\nCarlos Eduardo Dos Santos Leite");
	fprintf(Arquivo,"\nRA: 343232568040");
	fprintf(Arquivo,"\nMASCULINO");
	fclose(Arquivo);
	*/
	int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    do
    {
        system("cls");
        printf("\n 1 - Criar arquivo");
        printf("\n 2 - Inserir nome do aluno");
        printf("\n 3 - inserir matricula do aluno");
        printf("\n 4 - Inserir sexo do aluno");
        printf("\n 6 - Listar");
        printf("\n 7 - Editar");
        printf("\n 0 - Sair\n\n");
        
        int op;

        printf("Digite uma opção: ");
        scanf("%d", &op);

        switch(op)
        {
            case 1:
                criar Arquivo = fopen("","w");
            break;
            case 2:
                inserir nome();
            break;
            case 3:
                inserir matricula();
            break;
            case 4:
                inserir sexo();
            break;
            case 5:
                editar();
            break;
            case 6:
                listar();
            break;
            case 7:
                editar();
            break;
            default:
                printf("\nOpção Inválida!\n");
                getch();
            break;
        }

    }while(op!=0);
}
		
system("pause");	
return 0;
	}

