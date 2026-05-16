#include <stdio.h>


void selectionSort(int *V, int);
int comp, trocas;

int main(){
	int i;
	int vet[] = {17,38,12,2,44,25,19,-4,30,10};
	int tam = sizeof(vet)/sizeof(int);
	
	puts("vetor original");
	for(int i = 0; i < tam; i++){
		printf("%d|", vet[i]);
	}
	
	selectionSort(vet,tam);
	
	puts("\n\nVetor ordenado pelo Selection sort");
	for(i = 0; i< tam;i++){
	printf("%d|",vet[i]);
	}

	printf("\n\nQuantidade de comparacoes %d", comp);
	printf("\nQuantidade de trocas %d", trocas);
	
}

void selectionSort(int *V, int tam){
	 int i,j,menor,chave,aux;
	 
	 for(i = 0; i < tam-1;i++){
	 	chave = i;
	 	menor = i;
	 	for(j = i +1; j < tam;j++){
	 		comp++;
	 		if(V[j]<V[menor]){
	 			menor = j;
			 }
		 }
		 if(menor != chave){
		 	aux = V[chave];
		 	V[chave] = V[menor];
		 	V[menor] = aux;
		 	trocas++;
		 	
		 }
	 	
	 }
}
