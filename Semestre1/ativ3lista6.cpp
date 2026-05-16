#include <stdio.h>

main(){
	int i;
	int s, n;
	char resp[20];
	float posi;
	float neg;
	
	i = 0;
	while(i < 19){
		printf("Insira sua resposta s/n  \n");
		scanf(" %c", &resp[i]);
		
		if(resp[i] == 's'){
			printf("Positivo adicionado %i \n", s + 1);
			s++;
		}else if(resp[i] == 'n'){
			printf("Negativo adicionado %i \n", n + 1);
			n++;
		}else{
			break;
		}
		i++;
	}
	posi = (s * 100) / 20;
	neg = (n * 100) / 20;
	
	
	printf("Esta é a porcentagem de SIM a cada 20, %f %", posi);
	printf("Esta é a porcentagem de NÃO a cada 20, %f %", neg);	
}
