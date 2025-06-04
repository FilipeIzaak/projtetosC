/*
	Name: ConversorBinario.cpp
	Author: Filipe izaak
	Date: 27/05/25 11:35
	Description: PRograma que converte numeros positivos e inteiros, para seu equivalente em binario 
*/

#include <stdio.h>

main(){
	int vet[30];
	int i = 0;
	int num, quoc, resto;
	num = quoc = resto = 0;
	printf("Digite um número para converte-lo em binas");
	scanf("%d", &num);
	
	do{
		printf("%d, ", num);
		quoc = num/2;
		resto = num -(quoc * 2);
		vet[i] = resto; 
		num = quoc;
		i++;
	}while(num >= 2);
	vet[i] = num;
	
	printf("\n Vetor original \n ");
	for(i = 0; vet[i] == 0 || vet[i] == 1  ;i++){
		printf("%d |", vet[i]);
		
	}
	printf("\n Vetor invertido \n ");
	for(i = i - 1; i >= 0 ;i--){
		printf("%d |", vet[i]);
		
	}
	
}
