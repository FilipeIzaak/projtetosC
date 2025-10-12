/*
	Name: 
	Copyright: 
	Author: 
	Date: 12/10/25 11:25
	Description: Faça um algortimo para imprimir matrizes e coloca-las, fazer também dos 0´s e 1´s
*/

#include <stdio.h>


void imprimirMatriz(int [][3],int);
void zeroUm(int [][3],int);

int main(){
	int mat[3][3];
	
	printf("Insira os valores para sua matriz 3x3");
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			scanf("%d", &mat[i][j]);
		}
	}
	
	printf("\nIMPRIME A MATRIZ\n");
	imprimirMatriz(mat,3);
	
	printf("\nTRANSFORMA EM 0´S E 1´S\n");
	zeroUm(mat,3);
	
	printf("\nIMPRIME A MATRIZ\n");
	imprimirMatriz(mat,3);
}

void imprimirMatriz(int mat[][3],int ordem){
	
	for(int i = 0; i < 3;i++){
		for(int j = 0; j < 3;j++){
			printf("\n[%d][%d] = %d", i,j,mat[i][j]);
		}
	}
	
}

void zeroUm(int mat[][3],int ordem){
	for(int i = 0; i < 3;i++){
		for(int j = 0; j < 3;j++){
			
			if(mat[i][j] > 10){
				mat[i][j] = 0;
			}else if(mat[i][j] < 10){
				mat[i][j] = 1;	
		}
	}
}
}

