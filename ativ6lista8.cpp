#include <stdio.h>

main(){
	
	int mat[4][4];
	int i;
	int j;
	
	
	 printf("Digite 16 números inteiros positivos para preencher a matriz 4x4:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            do {
                printf("mat[%d][%d]: ", i, j);
                scanf("%d", &mat[i][j]);
                if(mat[i][j] < 0)
                    printf("Digite apenas valores positivos.\n");
            } while(mat[i][j] < 0);
        }
    }

    // (a) Imprimir os números maiores que 10
    printf("\n(a) Números maiores que 10:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            if(mat[i][j] > 10) {
                printf("mat[%d][%d] = %d\n", i, j, mat[i][j]);
            }
        }
    }
	
	
	
	
	j = 0;
	i = 0;
	printf("\n \n Números impares \n");
	while(i < 4){
		while(j < 4){
			if(mat[i][j] % 2 == 1 ){
				printf("[%i] [%i] = %i \n",i,j, mat[i][j]);
			}
			j++;
		}
		j = 0;
		i++;
	}
	
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			if(-mat[i][j] < -7){
				  printf("mat[%d][%d] = %d (equivalente negativo: %d)\n", i, j, mat[i][j], -mat[i][j]);
			}
		}
	}
	
}
