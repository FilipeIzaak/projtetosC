/*
	Name: vetorFunc.cpp
	Author: Filipe izaak
	Date: 15/09/25 07:53
	Description: faz a carga e operações em vetores por meio de funções
*/

#include <stdio.h>
//sessão de prototipação
int lerNum();
void imprimirVetor(int *, int );
void imprimirVetorContrario(int *, int);

main(){
	int vet[2];
	int tam = sizeof(vet)/sizeof(int); 
	for(int i = 0; i < tam; i++){
		vet[i] = lerNum();
	}
	 
	imprimirVetor(vet,tam);
	imprimirVetorContrario(vet,tam);
}//fim do programa

int lerNum(){
	int num;
	printf("Digite um numero");
	scanf("%d", &num);
	return num;
}
void imprimirVetor(int *V, int tam){
	printf("TAm");
	for(int i = 0; i < tam; i ++){
		printf("%d|", V[i]);
	}
}

void imprimirVetorContrario(int *V,int tam){
	int tama;
	tama = tam;
	printf("\nTam");
	for (int i = tam - 1; i >= 0; i--) {
    printf("%d|", V[i]);
	}
}
