/*3. Escreva um programa que leia primeiro os 6 n�meros gerados pela loteria e depois os 6
n�meros do seu bilhete. O programa ent�o compara quantos n�meros o jogador acertou.
Em seguida, ele aloca espa�os para um vetor de tamanho igual a quantidade de n�meros
corretos e guarda os n�meros corretos nesse vetor. Finalmente, o programa exibe os
n�meros sorteados e os seus n�meros corretos.*/
/*
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(){
  int *loteria, *bilhete, *corretos; // ponteiros
  int lot = 6, bil = 6; // tamanho do vetor
  int i, j, k, acertou = 0; // controle
  
  
 loteria = new int[lot];  // aloca��o para loetria
 bilhete = new int[bil]; // aloca��o para bilhete
 
 
 for (i=0; i < lot; i++){
   cout << "Informe os n�meros da loteria: "; // preenchendo loteria;
   cin >> loteria[i];
 }
 for (j=0; j < bil; j++){
   cout << "Informe os n�meros do seu bilhete: "; // preenchendo bilhete;
   cin >> bilhete[j];
 }
  for (i=0; i<6; i++){
    for (j=0; j<6; j++){
      if (loteria[i] == bilhete[j]){  // fazendo a compara��o 
        acertou ++;                 // se a compara��o for igual incrementa  
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
  cout << "N�meros sorteados na bilheteria: "<<endl;
  for (i=0; i < lot; i++){
   cout << loteria[i] << endl;
 }
  cout << "N�meros corretos: "<<endl;
  for (i= 0; i < acertou; i++){
      cout << corretos[i] << endl;
  }
    delete []loteria;
    delete []bilhete;
    delete []corretos;
}
*/

/*4. Fa�a um programa que leia uma quantidade qualquer de n�meros armazenando-os na
mem�ria e pare a leitura quando o usu�rio entrar um n�mero negativo. Em seguida,
imprima o vetor lido.*/
/*
#include <iostream>
#include <stdlib.h>

using namespace std;

int main (){
    int num, tam = 0;
    int i;
    int numeros[100];


    while (num >= 0){
        cout << "Informe valores: ";
        cin >> num;
        tam ++;
        numeros[tam] = num;
    }

    for (i=numeros[1]; i<tam; i++){
        if (numeros[i] >= 0) {
        cout << numeros[i]<<endl;
        }
    }
}
*/

/*5. Fa�a um programa que pergunte ao usu�rio quantos valores ele deseja armazenar em
um vetor de double. Esse vetor deve ter um tamanho maior
ou igual a 10 elementos. Use este vetor din�mico como um vetor comum, atribuindo aos 10
primeiros elementos do vetor valores aleat�rios (usando a fun��o rand)
entre 0 e 100. Exiba na tela os valores armazenados nos 10 primeiros elementos do vetor.*/
/*
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
  double *vetor;
  int n, i;
  
  cout << "Informe o tamanho do vetor: " << endl;
  cin >> n;
  
  vetor = new double[n];
  
  for (i=0; i<10; i++){
    vetor[i] = rand()%100;
  }
  
  for (i=0; i<10; i++){
    cout << vetor[i] << endl;
  }
  
  delete []vetor;
}
*/

/* 6. Fa�a um programa que leia numeros do teclado e os armazene em um vetor alocado
dinamicamente. O usu�rio ir� digitar uma sequ�ncia de n�meros, sem limite de quantidade.
Os n�meros ser�o digitados um a um e, sendo que caso ele deseje encerrar a entrada de
dados, ele ir� digitar o n�mero ZERO. Os dados devem ser armazenados na mem�ria deste
modo.
� Inicie com um vetor de tamanho 10 alocado dinamicamente;
� Ap�s, caso o vetor alocado esteja cheio, aloque um novo vetor do tamanho do
vetor anterior adicionado espac �o para mais 10 valores (tamanho N+10, onde N
inicia com 10);
  Copie os valores j� digitados da �rea inicial para esta �rea maior e libere a
mem�ria da �rea inicial;
� Repita este procedimento de expandir dinamicamente com mais 10 valores o vetor
alocado cada vez que o mesmo estiver cheio. Assim o vetor ir� ser �expandido� de 10
em 10 valores.
Ao final, exiba o vetor lido.
*/

#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

int main (){
  int tam = 10;
  int ~�kk
  
  
}













/* 7. Fa�a um programa que leia do usu�rio o tamanho de um vetor a ser lido e fa�a a
aloca��o din�mica de mem�ria. Em seguida, leia do usu�rio seus valores e imprima o vetor
lido.
*/
/*
#include <iostream>
#include <stdlib.h>
using namespace std;

int main (){
  int i, tamanho;
  int *numeros;
  
  cout << "Informe o tamanho do vetor: ";
  cin >> tamanho;
  
  for(i=0; i< tamanho; i++){
    cout << "Informe valores: ";
    cin >> numeros[i];
  }
  
  for(i=0; i<tamanho; i++){
    cout << numeros[i] << endl;
    }
    
  delete []numeros;
}
*/
/* 8. Fa�a um programa que leia do usu�rio o tamanho de um vetor a ser lido e fac �a a
aloca��o din�mica de mem�ria. Em seguida, leia do usu�rio seus valores e mostre quantos
dos n�meros s�o pares e quantos s�o ~
�mpares.
*/
/*
#include <iostream>
#include <stdlib.h>
using namespace std;

int main (){
  int tamanho, contPar = 0, contImpar = 0;
  int *vetor;
  int i;
  
  cout << "Informe o tamanho do vetor: ";
  cin >> tamanho;
  
  vetor = new int[tamanho];
  
  for(i=0; i<tamanho; i++){
    cout<< "Informe valores: ";
    cin >> vetor[i];
      if (vetor[i] %2 == 0){
        contPar ++;
      } else {
        contImpar ++;
      }
  }
  
  for(i=0; i<tamanho; i++){
    cout << vetor[i] << endl;
  }
  
  cout << "Existem " << contPar << " numeros pares." << endl;
  cout << "Existem " << contImpar << " numeros impares." << endl;
    
  delete []vetor;
}
*/

/* 9. Fa�a um programa que receba do usu�rio o tamanho de uma string e chame uma fun��o
para alocar dinamicamente essa string. Em seguida, o usu�rio dever� informar o conte�do
dessa string. O programa imprime a string sem suas vogais.
*/
/*
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main (){
  int tamanho;
  char *palavra;
  int i;
  
  cout << "Informe quantas letras: ";
  cin >> tamanho;
  
  palavra = new char[tamanho];
  

  for (i=0; i<tamanho; i++){
    cout << "Informe o conteudo da palavra: ";
    cin >> palavra[i];
     
  }
  
  
  cout << "a sua palavra eh: "<< palavra <<  endl;

  
  cout <<endl << "A sua palavra sem as vogais eh: "<< endl;
  
  i=0;
    while(i<tamanho){
    if ( ((palavra[i]=='a') || (palavra[i]=='A')) || ((palavra[i]=='e')
        || (palavra[i]=='E')) || ((palavra[i]=='i')  ||  (palavra[i]=='I')) ||
        ((palavra[i]=='o')  ||  (palavra[i]=='O')) || ((palavra[i]=='u') || (palavra[i]=='U')) ) {
        i++;
    }else{
        cout << palavra[i] << endl;
        i++;
    
    }
  }
}
*/


/* 10. Fa�a um programa para armazenar em mem�ria um vetor de dados contendo 100
valores do tipo int.
(a) Fa�a um loop e verifique se o vetor cont�m realmente os 100 valores
inicializados.
com zero (conte os 100 zeros do vetor).
(b) Atribua para cada elemento do vetor o valor do seu �ndice junto a este vetor.
(c) Exibir na tela os 10 primeiros e os 10 �ltimos elementos do vetor.
*/
/*
#include <iostream>

using namespace std;

int main (){
    int vetor[100];
  int i;
  
  // vetor original
  cout << "VETOR ORIGINAL: " << endl;
  for(i=1; i<=100; i++){
    vetor[i]=0;
    cout << i << " - " << vetor[i] << endl;
  }
   // dez primeiros indices
   cout << "PRIMEIROS INDICES: " << endl;
   for(i=1; i<=10; i++){
    vetor[i]= i;
    cout << vetor[i] << endl;
  }
  
  //dez ultimos indices
  cout << "ULTIMOS INDICES: " << endl;
  for(i=90; i<100; i++){
    vetor[i]= i;
    cout << vetor[i] << endl;
  }
}
*/

