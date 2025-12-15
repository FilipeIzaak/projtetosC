/*
	Name: exercicio 4
	Copyright: 
	Author: 
	Date: 24/11/25 09:10
	Description: 
*/

#include <stdio.h>

void encheMat(int mat[3][3]);
int somaMatriz(int mat1[3][3], int mat2[3][3]);


main(){
	int mat1[3][3];
	int mat2[3][3];
	int mat3[3][3];
	int i, j;
	
	encheMat(mat1);
	encheMat(mat2);
	
	somaMatriz(mat1,mat2);
	
	

}

void encheMat(int mat[3][3]){
	printf("Preencha essa matriz");
	int i, j;
	for(i = 0; i < 3;i++){
		for(j = 0; j < 3;j++){
			printf("[%d][%d] = ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	
}

int somaMatriz(int mat1[3][3], int mat2[3][3]){
	int mat3[3][3];
	int i, j;
	for(i = 0; i < 3;i++){
		for(j = 0; j < 3;j++){
			mat3[i][j] = mat1[i][j] + mat2[i][j];
		}
	}
		for(i = 0; i < 3;i++){
		for(j = 0; j < 3;j++){
			printf("\n[%d][%d] = [%d]", i, j ,mat3[i][j]);

		}
	}	
}

