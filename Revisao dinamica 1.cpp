/*2. Fa�a um programa que leia um n�mero N e:
� Crie dinamicamente e leia um vetor de inteiro de N posi��es;
� Leia um n�mero inteiro X e conte e mostre os m�ltiplos desse n�mero que existem
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
  
  cout << "Informe um n�mero: ";
  cin >> x;
  
  for (i=0; i<n; i++){
    if (vetor[i] % x == 0){
      m++;
    }
  }
  
  cout << "Existem " << m << " m�ltiplos de " << x << endl;
  
    delete []vetor;
  
}
