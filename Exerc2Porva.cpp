#include <stdio.h>

int somador(int,int);
 
main(){
	int i, num, result;
	i = num = 0;
	scanf("%d", &num);
	
	result = somador(num,i);
	
	printf("Quantas vezes foi retornado o mesmo valor %d", result);
}

int somador(int num, int i){
	if(num >= 100){
		return i;
	}
	printf("\nValor atual: %d", num);
	return somador(num + num, i + 1);
}
