#include <stdio.h>


void selectionSort(int *, int);

int main(){
	int i;
	int vet[] = {17,38,12,2,44,25,19,-4,30,10};
	int tam = sizeof(vet)/sizeof(int);
	
	printf("Vetor desordenado\n");
	for(i = 0; i < tam; i++){
		printf("%d|", vet[i]);
	}
	
	bubbleSort(vet, tam);
	
	
	printf("\nVetor ordenado com bubble sort\n");
	for(i = 0; i < tam; i++){
		printf("%d|", vet[i]);
	}
	
}

void selectionSort(int *V, int tam){
	int i,j,chave,aux,menor
	
	for(i = 0; i < tam-1;i++){
		chave = i;
		menor = i;
		for(j = i+1; j < tam;j++){
			if(V[menor] > V[j]){
				menor = j;
			}	
			
		}
		
		if(menor != chave){
			aux = V[chave];
			V[menor] = V[chave];
			V[menor] = aux;
		}
	}
