/*1. Crie um programa que:
(a) Aloque dinamicamente um array de 5 n�meros inteiros.
(b) Pe�a para o usu�rio digitar os 5 n�meros no espa�o alocado.
(c) Mostre na tela os 5 n�meros.
(d) Libere a mem�ria alocada.
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

int main (){
  int *vetor;
  int i, m = 5; 
  
  vetor = new int [m]; // A
    for (i=0; i<m; i++){
      cout << "Informe valores: "; // B
      cin >> vetor[i];
    }
    
   for (i=0; i<m; i++){
     cout << vetor[i] << endl; //C
   }
    
  
    delete []vetor;  // D
}

