#include <stdlib.h>
#include <stdio.h>

#define TAM 10


int main(){
	
	int num[TAM] = {100, -99, 10, 0, 3, 1, 7, 8, 9, -10};
	int i, cont, aux;
	
	printf("\n- > Ordem que se encontra os elementos no array: ");
	
	for (i = 0; i < TAM; i++)
	{
		printf("%4d", num[i]);
	}
	
	/* Algoritmo de ordenacao bubble sort*/
	for (cont = 1; cont < TAM; cont ++)
	{
		for (i = 0; i < TAM - 1; i++) {
			if (num[i] > num[i + 1]) {
				aux = num[i];
				num[i] = num[i] + 1;
				num[i + 1] = aux;
			}
		}
	}
	printf("\n Elementos ordenados em ordem crescente no array: ");
	printf("%4", num[i]);
	return 0;
	system("pause");
}
