/*3. Escreva um programa que leia primeiro os 6 números gerados pela loteria e depois os 6
números do seu bilhete. O programa então compara quantos números o jogador acertou.
Em seguida, ele aloca espaços para um vetor de tamanho igual a quantidade de números
corretos e guarda os números corretos nesse vetor. Finalmente, o programa exibe os
números sorteados e os seus números corretos.*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(){
  int *loteria, *bilhete, *corretos; // ponteiros
  int lot = 6, bil = 6; // tamanho do vetor
  int i, j, k, acertou = 0; // controle
  
  
 loteria = new int[lot];  // alocação para loetria
 bilhete = new int[bil]; // alocação para bilhete
 
 
 for (i=0; i < lot; i++){
   cout << "Informe os números da loteria: "; // preenchendo loteria;
   cin >> loteria[i];
 }
 for (j=0; j < bil; j++){
   cout << "Informe os números do seu bilhete: "; // preenchendo bilhete;
   cin >> bilhete[j];
 }
  for (i=0; i<6; i++){
    for (j=0; j<6; j++){
      if (loteria[i] == bilhete[j]){  // fazendo a comparação 
        acertou ++;                 // se a comparação for igual incrementa  
      }
    }
  }
  cout << "Numeros corretos:"<< acertou << endl;
  corretos = new int[acertou];  //alocando memoria para numeros corretos
  
    for (i=0; i<6; i++){
    for (j=0; j<6; j++){
      if (loteria[i] == bilhete[j]){ // 
        corretos[i] = loteria[i];
      }
    }
  }
    for (i= 0; i < acertou; i++){
      if (bilhete[i] == loteria[i]){
        corretos[i] = bilhete[i];
      }
    }
  cout << "Números sorteados na bilheteria: "<<endl;
  for (i=0; i < lot; i++){
   cout << loteria[i] << endl;
 }
  cout << "Números corretos: "<<endl;
  for (i= 0; i < acertou; i++){
      cout << corretos[i] << endl;
  }
    delete []loteria;
    delete []bilhete;
    delete []corretos;
}

