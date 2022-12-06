#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace sttd;


	
//C�lculo de fatorial com fun��o recursiva
	double fatorial(int n);
	int main(void)
{
  int numero;
  double f;
  
  printf("Digite o numero que deseja calcular o fatorial: ");
  scanf("%d",&numero);
  
  //chamada da fun��o fatorial
  f = fatorial(numero);
  
  printf("Fatorial de %d = %.0lf",numero,f);
  
  getch();
  return 0;
}
//Fun��o recursiva que calcula o fatorial
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
	
/* Em uma fun��o recursiva, a cada chamada � criada na mem�ria uma nova ocorr�ncia da fun��o com comandos e vari�veis 
�isolados� das ocorr�ncias anteriores.

A fun��o � executada at� que todas as ocorr�ncias tenham sido resolvidas.

Por�m um problema que surge ao usar a recursividade � como faz�-la parar. Caso o programador n�o tenha cuidado � 
f�cil cair num loop infinito recursivo o qual pode inclusive esgotar a mem�ria�

Toda recursividade � composta por um caso base e pelas chamadas recursivas,.

Caso base: � o caso mais simples. � usada uma condi��o em que se resolve o problema com facilidade.

Chamadas Recursivas: procuram simplificar o problema de tal forma que convergem para o caso base.

Vantagens da recursividade

Torna a escrita do c�digo mais simples e elegante, tornando-o f�cil de entender e de manter.
Desvantagens da recursividade

Quando o loop recursivo � muito grande � consumida muita mem�ria nas chamadas a diversos n�veis de recurs�o, pois cada 
chamada recursiva aloca mem�ria para os par�metros, vari�veis locais e de controle.
Em muitos casos uma solu��o iterativa gasta menos mem�ria, e torna-se mais eficiente em termos de performance do que usar 
recurs�o.
\*


