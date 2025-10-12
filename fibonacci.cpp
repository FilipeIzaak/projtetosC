/*
	Name:  
	Author: 
	Date: 06/10/25 09:53
	Description: 
*/
#include <stdio.h>
void fibonacci(int);

int main(){
	int quantElementos;
	quantElementos = 0;
	printf("Quantos elementos de fibonacci deseja ver? \n");
	scanf("%d",&quantElementos);
	
	fibonacci(quantElementos);

}

void fibonacci(int quantElementos){
	long int ant, atual, prox;
	ant = atual = 1;
	prox = 0;
	
	printf("%lld,", ant);
	printf("%lld,", atual);
	
	while(quantElementos - 1 > 0){
		
		prox = atual + ant;
		ant = atual;
		atual = prox;
		
		printf("%lld,", prox);
		quantElementos--;
	}
	
	

}

