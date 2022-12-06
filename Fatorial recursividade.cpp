#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace sttd;


	
//Cálculo de fatorial com função recursiva
	double fatorial(int n);
	int main(void)
{
  int numero;
  double f;
  
  printf("Digite o numero que deseja calcular o fatorial: ");
  scanf("%d",&numero);
  
  //chamada da função fatorial
  f = fatorial(numero);
  
  printf("Fatorial de %d = %.0lf",numero,f);
  
  getch();
  return 0;
}
//Função recursiva que calcula o fatorial
//de um numero inteiro n
double fatorial(int n)
{
  double vfat;
  
  if ( n <= 1 )
    //Caso base: fatorial de n <= 1 retorna 1
    return (1);
  else
  {
    //Chamada recursiva
    vfat = n * fatorial(n - 1);
    return (vfat);
  }
 return 0;
 system("pause"); 
}
	
/* Em uma função recursiva, a cada chamada é criada na memória uma nova ocorrência da função com comandos e variáveis 
“isolados” das ocorrências anteriores.

A função é executada até que todas as ocorrências tenham sido resolvidas.

Porém um problema que surge ao usar a recursividade é como fazê-la parar. Caso o programador não tenha cuidado é 
fácil cair num loop infinito recursivo o qual pode inclusive esgotar a memória…

Toda recursividade é composta por um caso base e pelas chamadas recursivas,.

Caso base: é o caso mais simples. É usada uma condição em que se resolve o problema com facilidade.

Chamadas Recursivas: procuram simplificar o problema de tal forma que convergem para o caso base.

Vantagens da recursividade

Torna a escrita do código mais simples e elegante, tornando-o fácil de entender e de manter.
Desvantagens da recursividade

Quando o loop recursivo é muito grande é consumida muita memória nas chamadas a diversos níveis de recursão, pois cada 
chamada recursiva aloca memória para os parâmetros, variáveis locais e de controle.
Em muitos casos uma solução iterativa gasta menos memória, e torna-se mais eficiente em termos de performance do que usar 
recursão.
\*


