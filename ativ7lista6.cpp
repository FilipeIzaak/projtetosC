#include <stdio.h>

main(){
	int mat[5][5];
	int i;
	int j;
	i = j = 0;
	
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5;j++){
			printf("Insira o valor da matriz [%i][%i] \n ",i, j);
			scanf("%i", &mat[i][j]);
		}
	}
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5;j++){
			printf("[%i][%i] = %i | \n",i, j, mat[i][j]);
		}
	}
	printf("\n Esta é a matriz de maneira invertida \n");
	for(i = 5; i >= 0; i--){
		for(j = 5; j >= 0;j--){
			printf("[%i][%i] = %i | \n",i, j, mat[i][j]);
		}
	}
	
}
