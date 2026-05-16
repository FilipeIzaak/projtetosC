#include <stdio.h>

int main(){
	int can, can1, can2, can3, can4, nulo, branco, i;
	 i = 0;
	do{
		printf("Escolha entre os seguintes candidatos: candidado 1 = 1 \n candadto 2 - 2 \n candidato 3 - 3 \n candidato 4 - 4 \n se for nulo 5 \n se for branco - 6 \n");
		scanf("%i", &can);
		
		if (can == 1){
			can1++;
		}else if (can == 2){
			can2++;
		}else if (can == 3){
			can3++;
		}else if (can == 4){
			can4++;
		}else if (can == 5){
			nulo++;
		}else{
			branco++;
		}
		i++;
	}while (i < 4);
	
	float perc1 = (can1 * 100.0) / i;
    float perc2 = (can2 * 100.0) / i;
    float perc3 = (can3 * 100.0) / i;
    float perc4 = (can4 * 100.0) / i;
    float perc5 = (nulo * 100.0) / i;
    float perc6 = (branco * 100.0) / i;

    // resultados
    printf("\nResultado da eleição:\n");
    printf("Candidato 1: %d votos (%.2f%%)\n", can1, perc1);
    printf("Candidato 2: %d votos (%.2f%%)\n", can2, perc2);
    printf("Candidato 3: %d votos (%.2f%%)\n", can3, perc3);
    printf("Candidato 4: %d votos (%.2f%%)\n", can4, perc4);
    printf("Nulos: %d votos (%.2f%%)\n", nulo, perc5);
    printf("Brancos: %d votos (%.2f%%)\n", branco, perc6);
    printf("Total de votos: %d\n", i);
}
