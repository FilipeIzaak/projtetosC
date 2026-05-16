/*
	Name: atividade
	Author: Filipe Izaak
	Date: 29/09/25 08:01
	Description: 
*/

#include <stdio.h>
//prototipação da matriz
void imprimirmatriz(int [][3],int);
void trocarzerosuns(int [][3],int);

main(){
	int i,j;
	int mat[3][3];
	
	puts("Digite os 9 eementos da matriz");
	for(i = 0; i< 3; i++){
		for(j = 0; j <3; j++){
			scanf("%d", &mat[i][j]);
		}
	}
	puts("\n\nMATRIZ CARREGADA");
	
	puts("\nCOnteudo Da Matriz");
	imprimirmatriz(mat,3);
	puts("\nzero e um");
	trocarzerosuns(mat,3);
}

void imprimirmatriz(int M[][3], int ordem){
	for(int i = 0; i < ordem; i++){
		for(int j = 0; j < ordem; j++){
			printf("[%d][%d] = %d\n", i,j,M[i][j]);
		}
	}
}

void trocarzerosuns(int M[][3], int ordem){
	for(int i = 0; i < ordem; i++){
		for(int j = 0; j < ordem; j++){
			if(M[i][j] < 10){
				M[i][j] = 1;
				printf("[%d][%d] = %d\n", i,j,M[i][j]);
			}else if(M[i][j] > 10){
					M[i][j] = 0;
					printf("[%d][%d] = %d\n", i,j,M[i][j]);
		}
	}
}
}
