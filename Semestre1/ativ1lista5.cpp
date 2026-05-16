#include <stdio.h>
main(){
	int ida[7];
	int i = 0;
	
	for(i = 0; i < 7; i++){
		printf("Digite o %iº número", i+1);
		scanf("%i", &ida[i]);
	}
	printf("\n Vetor carregado \n");
	for(i = 0; i < 7; i++){
		printf("%i |",ida[i]);
	}
	
	
	printf("\n Inversor \n");
	for(i = 7; i >= 0; i--){
		printf("%i |", ida[i]);
	}
}
