/*
	Name: cripto 
	Author: 
	Date: 01/09/25 10:14
	Description: 
*/

#include <stdio.h>

main(){
	int i,j,k;
	i = j = k = 0;
	char nome[20];
	char docs[20];
	char crypto[40];
	
	printf("insira seu nome\n");
	gets(nome);
	
	printf("insira seu rg e cpf\n");
	gets(docs);
	
	for(i = 0; nome[i]!= '\0'; i++){
		printf("%c|",nome[i]);
	}
	printf("\ndocs\n");
	for(i = 0; docs[i]!= '\0'; i++){
		printf("%c|",docs[i]);
	}
	
	printf("\nCRIACAO DO CRYPTO\n");
	for(i = 0; nome[i]!= '\0'; i++){
		crypto[j] = nome[i];
		crypto[j+1] = docs[i];
		j = j + 2;
	}
	
	printf("\ncrypto\n");
	for(j = 0;crypto[j] != '0'; j++){
		printf("%c",crypto[j]);
	}
}

