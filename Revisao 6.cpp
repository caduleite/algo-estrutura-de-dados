/*1. Crie um programa que:
(a) Aloque dinamicamente um array de 5 números inteiros.
(b) Peça para o usuário digitar os 5 números no espaço alocado.
(c) Mostre na tela os 5 números.
(d) Libere a memória alocada.
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

