#include <stdio.h>

main(){
	float precos[30];
	int i = 0;
	float entrada;
	
	printf("Digite n�meros de 1 a 30, ou 0 para sair");
	
	while(i < 30){
		printf("Digite o %i� n�mero", i + 1);
		scanf("%f", &entrada);
		
		if(entrada == 0){
			printf("Encerrando opera��o");
			break;
		}
		if(entrada >= 1 && entrada <= 30){
			printf("N�mero contabilizado");
			precos[i] = entrada;
		} else{
			printf("N�mero inv�lido");
		}
		
		i++;
	}
	printf("\n valores armazenados");
	for(int j = 0; j < i; j++){
		printf("%.2f |", precos[j]);
		
	}
	
}
