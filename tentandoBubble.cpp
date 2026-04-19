#include <stdio.h>

void bubbleSort(int *, int);

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

void bubbleSort(int *V, int tam){
	int i, aux;
	
	
	do{
		i = 0;
		
		while(i < tam -1){
			if(V[i] > V[i+1]){
				aux = V[i];
				V[i] = V[i+1];
				V[i+1] = aux ;
			}
			i++;
		}
		tam--;
	}while(tam > 0);
}
