#include <stdio.h>

main(){
	int mat[0][0];
	int par;
	int impar;
	int i, j;
	int x, y;
	x = y = i = j = par = impar = 0;
	
	printf("Defina qual sera o tamanho X do vetor!");
	scanf("%i", &x);
	printf("Defina o valor do tamanho Y do vetor!");
	scanf("%i", &y);
	
	do{
		do{
			printf("Digite o valor [%i] [%i]", i, j);
			scanf("%i", &mat[i][j]);
			j++;
		}while(j < y);
		j = 0;
		i++;
	}while(i < x);
	
	
	
	printf("\n \n Todos os números \n");
	for(i = 0; i < x; i++){
		for(j = 0; j < y; j++){
			printf("[%i] [%i] = %i \n",i,j, mat[i][j]);
		}
	}
	
	
 printf("\n\nInvertido:\n");
    for (i = x - 1; i >= 0; i--) {
        for (j = y - 1; j >= 0; j--) {
            printf("[%d][%d] = %d\n", i, j, mat[i][j]);
        }
    }
	
	printf("\n \n Números pares \n");
	for(i = 0; i < x; i++){
		for(j = 0; j < y;j++){
			if(mat[i][j] % 2 == 0 ){
				printf("[%i] [%i] = %i \n",i,j, mat[i][j]);
			}
		}
	}
	
	j = 0;
	i = 0;
	printf("\n \n Números impares \n");
	while(i < x){
		while(j < y){
			if(mat[i][j] % 2 == 1 ){
				printf("[%i] [%i] = %i \n",i,j, mat[i][j]);
			}
			j++;
		}
		j = 0;
		i++;
	}
	
}
