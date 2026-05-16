#include<stdio.h>

void encheVet(int vet[]);
void encheMat(int mat[3][3], int vet[]);
main(){
	int i, j;
	int vet[9];
	int mat[3][3];
	
	 encheVet(vet);
	
	 encheMat(mat, vet);
	 
	 for(i = 0; i < 3; i++){
		for(j = 0; j < 3;j++){
			printf("\n[%d][%d] = [%d]", i,j, mat[i][j]);
		}
	}
}


void encheVet(int vet[]){
	
	for(int i = 0; i < 9; i++){
		scanf("%d", &vet[i]);
	}
	
}

void encheMat(int mat[3][3], int vet[]){
	int k = 0;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			mat[i][j] = vet[i];
		}
	}
	
}


