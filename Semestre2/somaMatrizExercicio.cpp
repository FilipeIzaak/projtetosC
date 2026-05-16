/*
	Name: 
	Copyright: 
	Author: 
	Date: 12/10/25 11:49
	Description: Faz a soma de duas matrizes e lança em uma terceira os resultados
*/

#include <stdio.h>

void carregaMat(int m[][3],int);
void printaMat(int m[][3],int);
void somarMat(int m[][3],int n[][3],int o[][3],int);


int main(){
	int m[3][3];
	int n[3][3];
	int o[3][3];
	
	printf("CARREGA A MATRIZ M");
	carregaMat(m,3);
	printf("CARREGA A MATRIZ N");
	carregaMat(n,3);
	
	printf("MOSTRA A MATRIZ M");
	printaMat(m,3);
	printf("MOSTRA A MATRIZ N");
	printaMat(n,3);
	
	
	somarMat(m,n,o,3);
	printf("MOSTRA A MATRIZ 0");
	printaMat(o,3);
	
}

void carregaMat(int mat[][3], int ordem){
	for(int i = 0;i < ordem;i++){
		for(int j = 0; j < ordem;j++){
			printf("Carregue a matriz");
			scanf("%d", &mat[i][j]);
		}
	}
}

void printaMat(int mat[][3], int ordem){
	for(int i = 0;i < ordem;i++){
		for(int j = 0; j < ordem;j++){
			printf("[%d][%d]=[%d]\n", i,j,mat[i][j]);
		}
	}
}

void somarMat(int m[][3], int n[][3],int o[][3], int ordem){
	for(int i = 0;i < ordem;i++){
		for(int j = 0; j < ordem;j++){
			o[i][j] = m[i][j] + n[i][j];
		}
	}
}

