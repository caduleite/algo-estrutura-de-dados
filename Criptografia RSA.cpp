#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* Função que calcula pontenciação mod n isso é a^e mod n */        

        long long int potmod (int a,int e,long long int n)
        {     
        long long int t=1;
        int i;
        for (i=1;i<=e;i++) t = t*a%n;
        return t;
        }

        int main ()
        {        
        char sSair;    
        char mc[50] ;
        int mi[50], i, j, k=0, e=1, c[20], d[20];

/* Nesse arquivo será guardada a mensagem codificada */        

        FILE *arq;
        arq = fopen("codigo.txt" , "w");

        printf (" Use somente letra minuscula e \"_\" ao invés de espaco.\n\n\n");

/* será usada para identificar se existe caracteres não reconhecidos pelo código, caso exista 
           a mensagem deverá ser reescrita sem estes caracteres */ 

        while (e==1 || e==0)
        {
            e = 1;
            printf (" Mensagem: ");
            scanf("%s", mc);
            for (i=0;mc[i]!=0;i++)
            {
/* ara a pré-codificação, os caracteres são ransformados em inteiros segundo a tabela ascii... */                

                mi[i] = mc[i];

                if (mi[i]==95) mi[i] = 99;
                else 
                {

/* ...depois subtrai 87 de todos os inteiros para que tenham 2 algarismos */                     

                     if (mi[i]>=97) mi[i] = mi[i] - 87;
                     else e = 0;
                     }
            }
        if (e==0)
        { 
          system("cls");
          printf(" Sua mensagem tem caracteres indisponiveis, escreva-a de novo.\n\n");
          }
        else e = 2;
        }

        j=0; 

/* Para terminar o pré-codificação os inteiros serão reagrupados tentando fazer que os novos inteiros 
que sejam menores e o mais proximo possivel, com os mesmo algarismo e em mesma ordem, de n
           da chave da assinatura. */

        while (j<i-2)
        {
            c[k] = mi[j]*10000 + mi[j+1]*100 + mi[j+2];
            if (c[k]<29489) j = j+3;
            else 
            {
                 if (c[k]/10<29489 && c[k]%10!=0) 
                 { 

/* Caso o resto seja 0, como esse resto será o primeiro algarismo a esquerda ele seria perdido, 
      para que isso não aconteça...*/                                   

                    mi[j+2] = c[k]%10;
                    c[k] = c[k]/10;
                    j = j+2;
                    }

/*...se usa dois inteiros para formar o novo inteiro*/                 

                 else 
                 { 
                   c[k] = c[k]/100;
                   j = j+2;
                   }
            }

            k++;
        }

        if (j==i-2) 
        {
            c[k] = 100*mi[j] + mi[j+1];
            }
        if (j==i-1) 
        {
            c[k] = mi[j];
            }
        for (i=0;i<=k;i++)
        {
            d[i] = potmod (c[i],20459,29489);
            d[i] = potmod (d[i],449,40297);
            fprintf(arq, "%d ",d[i]);
            }
               fclose(arq);
               printf("\n\n Mensagem Codificada com sucesso !\n\a");
               getch();
        }  
        
        
        
        
    /*Logo em seguida, executo a segunda rotina de decifragem que abre o arquivo criado anteriormente lê a mensagem criptografada e por 
	fim mostra a mensagem que o usuário digiou anteriormente já decifrada.*/
	
	
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* Função que calcula pontenciação mod n a^e mod n */

        long long int potmod (int a,int e,long long int n)  
        {
            long long int t=1;
            int i;
            for (i=1;i<=e;i++) 
            {
                t = t*a%n;
                }
            return t;
            }
        int main ()
        {
            char mc[50] ;
            int mi[50], i, j, k=0, e=1, c[20], d[20],r;

            FILE *arq;
            arq = fopen("codigo.txt" , "r") ;

/* Primeira parte da decodificação, onde será obtida a mensagem após a pré-codificação */            

            for (i=0;!feof(arq);i++)
            {
                fscanf(arq,"%d",&d[i]);
                c[i] = potmod (d[i],4493,40297);
                c[i] = potmod (c[i],1283,29489);
                }

/* Segunda parte da decodificação, onde será reagrupado os algarismo em pares */   

            for (j=0; j<i-1; j++)
            {
                if (c[j]>=10000)
                { 
                    c[j] = r*100000 + c[j];
                    }
                else 
                {
                    if (c[j]>=1000) 
                    {
                        c[j] = r*10000 + c[j];
                        }
                    else 
                    {
                    if (c[j]>=100) 
                    {
                        c[j] = r*1000 + c[j];
                        }
                    else 
                    {
                    if (c[j]>=10) 
                    {
                        c[j] = r*100 + c[j];
                        }
                    else 
                    {
                        c[j] = 10*r + c[j];
                        }
                    }
                    }
                }
            if (c[j]>=100000 || (c[j]<10000 && c[j]>=1000) || c[j]<100) 
            {
                r=0;
                }            
            if (c[j]<100000 && c[j]>=10000)
            { 
                r = c[j]%10; 
                c[j] = c[j]/10;
                }
            if (c[j]<1000 && c[j]>=100)
            { 
                r = c[j]%10; 
                c[j] = c[j]/10;
                }

            mi[k] = c[j]/10000;
            if (mi[k]!=0) 
            {
                c[j] = c[j]%10000; 
                k++;
                }

            mi[k] = c[j]/100;
            if (mi[k]!=0)                                 
            {
                c[j] = c[j]%100; k++;
                }

            mi[k] = c[j]; 
            k++;
            }

/* E aqui onde enfim os inteiros são transformados em caracteres, retornando a mensagem original */  

            for (i=0;i<k;i++) 
            {
                if (mi[i]!=99) 
                {
                    mc[i] = mi[i]+87;
                    }
                else 
                {
                    mc[i] = 95;
                    }
            }

            printf("%s\n",mc);
            getch();
        }
