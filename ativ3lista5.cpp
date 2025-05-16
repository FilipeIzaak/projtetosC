#include <stdio.h>

main(){
	int pessoas[6];
	float media;
	int i = 0;
	float acumulador;
	i= 0;
	
	
	printf("Carregue o vetor\n");
	do{
		printf("insira a altura da %iª pessoa", i + 1);
		scanf("%i",&pessoas[i]);
		
		i++;
	}while(i < 6);
	
	i = 0;
	for(i = 0;i < 7; i++){
		printf("%i |", pessoas[i]);
	};
	
	i = 0;
	while(i < 6){
		acumulador = acumulador + pessoas[i];
		i++;
	}
	printf("\n %f", acumulador);
	
	media = acumulador/7;
	printf("\n Esta é a média das alturas das pessoas  %f", media);
	
}
