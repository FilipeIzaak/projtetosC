#include <stdio.h>

main(){
	int num;
	int i;
	int acum;
	num = 0;
	acum = 0;

	
	printf("insira o número que deseja fatorar");
	scanf("%i", &num);
	printf("%i", num ,"! =");
	i = num;
	do{
		printf("%i x ", i);
		acum = acum + num;
        i--;
	}while (i > 0);
	printf(" = %i ", acum);
}

