#include <iostream> 
#include <stdio.h>
#include <stdlib.h>

using namespace std;


struct arvorebinaria{ // Estrutura da Arvore que simboliza o meu nó.
       int info; // Onde será armazenado o valor do nó.
       struct arvorebinaria *esquerda; // Ponteiro que aponta para Nó da esquerda.
       struct arvorebinaria *direita; // Ponteiro que aponta para Nó da direita.
};

arvorebinaria *raiz; // Ponteiro que aponta para raiz da arvore. 

arvorebinaria *visitaarvore(arvorebinaria *ra, arvorebinaria *r, int pValor){// *ra aponta para raiz, r* tambem aponta raiz, pValor pega o valor de vValo.
    if(r == NULL){ 
        r = (arvorebinaria *) malloc (sizeof(arvorebinaria)); 
        if (r == NULL){
            printf("\n\nErro. Sem memoria para alocar\n\n");
            system("pause");
            exit(0);
        }
        r->esquerda = NULL;
        r->direita = NULL;
        r->info = pValor;

        if(ra == NULL){ // Se raiz for nulo o numero enserido é raiz.
            printf("\n O numero foi adicionado sendo a raiz\n");
            system("pause");
            return r;
        }
        if(pValor < ra->info){ // Se o valor digitado for menor que valor da raiz valor e adicionado a esquerda de raiz.
            ra->esquerda = r;
            printf("\nEsse numero foi adicionado a esqueda de %d\n", ra->info);
        }else{  // Se nao valor digitado é adicionado a direita da raiz.
            ra->direita = r;
            printf("\nEssa numero foi adicionado a direita de %d\n", ra->info);
        }
        system("pause");
        return r;
    }
    if(pValor < r->info){
        visitaarvore(r, r->esquerda, pValor);
    }else{
        visitaarvore(r, r->direita, pValor);
    }
}

void incluir (void){ // funcao para enserir valores na orvore
     int vValor; // v de valor nome da variavel.
     printf("\nDigite um valor para ser inserido: ");
     scanf("%d", &vValor); // Captura apenas os valor inteiro "%d".
     if (raiz == NULL){ // Se a raiz for igual a null 
        raiz = visitaarvore(raiz, raiz, vValor); // A raiz recebe visataarvore passando: a raiz , raiz e vValor é o valor digitado.
     }else{
        visitaarvore(raiz, raiz, vValor);
     }
}

void preordem(arvorebinaria *pNo){
    if (pNo != NULL){
       printf("%d - ", pNo->info);
       preordem(pNo->esquerda);
       preordem(pNo->direita);
    }
}

void posordem(arvorebinaria *pNo){
    if (pNo != NULL){
       posordem(pNo->esquerda);
       posordem(pNo->direita);
       printf("%d - ", pNo->info);
    }
}

void emordem(arvorebinaria *pNo){
    if (pNo != NULL){
       emordem(pNo->esquerda);
       printf("%d - ", pNo->info);
       emordem(pNo->direita);
    }
}

int listar(arvorebinaria *pNo){
   int a=1,b=1;
   if(pNo != NULL){
      printf("(");
      printf("%d",pNo->info);
      a=listar(pNo->esquerda);// a==0 caso sub_arvore_esquerda==NULL
      b=listar(pNo->direita);// a==0 caso sub_arvore_direita==NULL
      if(b==0 && a==0){
          printf("()");// imprime  () se e somente se encontrar um nó folha
      }else if(b==0 && a!=0){
          // isso acontece se encontrar um nó com a perna direita null
          // printf("()");
      }else if(b!=0 && a==0){
         // isso acontece se encontrar um nó com a perna esquerda null
         // printf("()");
      }
      printf(")");// fecha a representação de uma raiz
   }else{
       return 0;// retorna 0 caso arvore == NULL
   }
}

int main (void){
    int op;
    raiz=NULL; // inicializa a minha raiz apontando para null.
    while(1){
        system ("cls");
        printf ("\n\n 1. Inserir");
        printf ("\n 2. Exibe Arvore");
        printf ("\n 3. Exibe Arvore em Pre - Ordem");
        printf ("\n 4. Exibe Arvore em Pos - Ordem");
        printf ("\n 5. Exibe Arvore em Em - Ordem ");
        printf ("\n 6. Sair");
        printf ("\n\n Digite a sua opcao: ");
        scanf ("%d",&op); // Capturo a operacao que o usuario digitou.
        fflush(stdin);
        switch (op) { // Ao digitar a opcao entro nos casos.
            case 1 : incluir();
                     break;
            case 2 : listar(raiz);
                     puts("\n\n");
                     system("pause");
                     break;
            case 3 : preordem(raiz);
                     system("pause");
                     break;
            case 4 : posordem(raiz);
                     system("pause");
                     break;
            case 5 : emordem(raiz);
                     system("pause");
                     break;
            case 6 : exit(0);
            default: printf ("\nOpcao errada");
                     system ("pause");
                     break;
        }
   }
}
