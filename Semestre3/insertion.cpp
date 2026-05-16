#include <stdio.h>
#include <stdlib.h>

void insertionSort(int *,int);
int comp, trocas;
int main(){
		int x, tam;	
	int vet[] = {17,38,12,2,44,25,19,-4,30,10};
	
	
	printf("Vetor desordenado\n");
	for(x = 0; x < tam; x++){
		printf("%d|", vet[x]);
	}
	
	insertionSort(vet, tam);
	
	
	printf("\nVetor ordenado com insertion sort\n");
	for(x = 0; x < tam; x++){
		printf("%d|", vet[x]);
	}
	
}

void insertionSort(int *V, int){
	int i, j, chave, tam;
	
	for(i = 1; i < tam; i++){
		chave = V[i];
		j = i-1;
		
		while(j>= 0 && chave <= V[j]){
			comp++;
			V[j+1] = V[j];
				j--;
			trocas++;
		}
		V[j+1] = chave;
		trocas++;
		
	}	
}


