#include <stdio.h>

void bubbleSort(int *, int);

int comp, trocas;
int main(){
	int i;
	int vet[] = {17,38,12,2,44,25,19,-4,30,10};
	int tam = sizeof(vet)/sizeof(int);
	
	
	puts("vetor original");
	for(int i = 0; i < tam; i++){
		printf("%d|", vet[i]);
	}
	
	bubbleSort(vet,tam);
	
	puts("\n\nVetor ordenado pelo bubble sort");
	for(i = 0; i< tam;i++){
	printf("%d|",vet[i]);
	}

	printf("\n\nQuantidade de comparacoes %d", comp);
	printf("\nQuantidade de trocas %d", trocas);
	
}


void bubbleSort(int *V, int tam){
	int i = 0;
	int aux = 0;
	
	do{
		i = 0;
		while(i < tam - 1){
			comp++;
			if(V[i] > V[i+1]){
			aux = V[i];
			V[i] = V[i+1];
			V[i+1]= aux;
			trocas++;
			}
			i++;
		}
		tam--;
	}while(tam > 0);
}

