/*
	Name: 
	Copyright: 
	Author: 
	Date: 29/09/25 09:57
	Description: 
*/

#include <stdio.h>
void carregamatriz(int m[][3], int ordem);
void somamatriz(int m1[][3], int m2[][3], int resultado[][3], int ordem);
void printmatriz(int m[][3], int ordem);
main(){
	int ordem = 3;
	int mat1[3][3];
	int mat2[3][3];
	int mat3[3][3];
	
	printf("\ncarregue a matriz 1\n ");
	carregamatriz(mat1, ordem);
	
	printf("\ncarregue a matriz 2\n ");
	carregamatriz(mat2, ordem);
	
	printf("Soma de matriz");
	 somamatriz(mat1, mat2, mat3, ordem);
	
	printf("\nresultado da matriz 3\n ");
	  printmatriz(mat3, ordem);
	  
	  return 0;
}


void carregamatriz(int m[][3], int ordem){
	int i, j;
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3;j++){
			scanf("%d", &m[i][j]);
		}
}
}
void somamatriz(int m1[][3], int m2[][3], int resultado[][3], int ordem){
	int i, j;
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3;j++){
			resultado[i][j] = m1[i][j] + m2[i][j];
		}
	}
}
void printmatriz(int m[][3], int ordem){
	int i, j;
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3;j++){
			printf("\nmatriz 3 [%d][%d] = %d", i,j,m[i][j]);
		}
	}
}
	

