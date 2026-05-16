/*
	Name: exercicio2
	Copyright: 
	Author: 
	Date: 24/11/25 08:09
	Description: recursividade direta, leia um numero inteiro e adicione o mesmo valor ate atingir 100, e retorne quantas vezes foi reaalizada a operação de somatoria
*/

#include <stdio.h>

int somador(int, int);

main(){
	int valor, i;
	valor = i = 0;
	printf("Digite um valor");
	scanf("%d", &valor);
	
	somador(valor, i);
	
	printf("quantas vezes foi repetido %d", i);
}

int somador(int valor,int i){
	if(valor > 100){
		printf("%d", i);
		return i;
	}
	printf("\n%d", valor);
	i++;
	somador(valor,i);
}
