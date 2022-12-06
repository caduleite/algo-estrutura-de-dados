/*2. Faça um programa que leia um número N e:
• Crie dinamicamente e leia um vetor de inteiro de N posições;
• Leia um número inteiro X e conte e mostre os múltiplos desse número que existem
no vetor.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main ()
{
  int *vetor;
  int n, x, i, m = 0;
  
  cout << "Informe o tamanho do vetor: ";
  cin >> n;
  
  vetor = new int[n];
  
  for (i=0; i<n; i++){
    cout << "Informe valores: ";
    cin >> vetor[i];
  }
  
  for (i=0; i<n; i++){
    cout << vetor[i] << endl;
  }
  
  cout << "Informe um número: ";
  cin >> x;
  
  for (i=0; i<n; i++){
    if (vetor[i] % x == 0){
      m++;
    }
  }
  
  cout << "Existem " << m << " múltiplos de " << x << endl;
  
    delete []vetor;
  
}
