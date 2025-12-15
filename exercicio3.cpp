/*
	Name: exercicio3
	Copyright: 
	Author: 
	Date: 24/11/25 08:09
	Description: matriz quadrada
*/

#include <stdio.h>

void encheVet(int vet[]);
void encheMat(int vet[],int mat[3][3]);

main(){
	int i,j;
	int vet[9];
	int mat[3][3];
	
	encheVet(vet);
	
//	for( i = 0; i < 9; i++){
//		printf("[%d]", vet[i]);
		
//	}
	
	encheMat(vet,mat);
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3;j++){
			printf("\n[%d][%d] = [%d]", i,j, mat[i][j]);
		}
	}
}

void encheVet(int vet[]){
	printf("Digite os valores para preencher o vetor");
	for(int i = 0; i < 9; i++){
		printf("[%d] =", i+1);
		scanf("%d", &vet[i]);
	}
	
	
}

void encheMat(int vet[],int mat[3][3]){
	int i;
	int j, k;
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3;j++){
			mat[i][j] = vet[k];
			k++;
		}
	}


}
