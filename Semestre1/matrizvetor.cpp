/*
	Name: matrizvertor.cpp
	Author: Filipe Izaak 
	Date: 27/05/25 09:49
	Description: Programa para fazer a carga definida por usuario e após a carga. passar todos os elementos para o vetor (array)
*/
#include <stdio.h>

main(){
	int i,j,x;
	int ordem;
	i = j = x = ordem = 0;
	printf("Escolha a ordem da matriz quadrada\n ");
	scanf("%i", &ordem);
	int mat[ordem][ordem];
	int vet[ordem * ordem];
	
	printf("Digite %i elementos inteiros: \n", ordem * ordem);
	while(i < ordem){
		while(j < ordem){
			printf("[%d][%d]: ",i,j);
			scanf("%d", &mat[i][j]);
			vet[x] = mat[i][j];
			x++;
			j++;
		}
		i++;
		j = 0;
	}
	
	i = 0;
	puts("Conteúdo da matriz \n");
	do{
		for(j = 0; j < ordem; j++){
			printf("[%d][%d]: %d \n", i,j, mat[i][j]);
			
		}
		i++;
	}while(i < ordem);
	
	puts("\n Exibe o conteúdo do vetor");
	for(x = 0; x < ordem * ordem; x++){
		printf("%d |", vet[x]);
	}
}

