/*
	Name:crypto.cpp 
	Author: Filipe Izaak 
	Date: 03/06/25 09:45
	Description: programa que simula uma criptografia utilizando vetores 
*/

#include <stdio.h>

main(){
	char nome [40];
	char cpf[11];
	char rg[10];
	char docs[24];
	char cripto[65];
	
	puts("Programa para criptografar dados pessoais");
	puts("==========================================");
	printf("Nome completo: "); gets(nome);
	printf("CPF: "); gets(cpf);
	printf("RG: "); gets(rg);
	
	puts("\n Conteúdo dos vetores");
	printf("nome: %s\n", nome);
	printf("CPF: %s\n", cpf);
	printf("RG: %s\n", rg);
	
	int i;
	//imprimindo o vetor de nome caracter por caracter
	puts("\n nome dentro do vetor");
	for( i = 0; nome[i]!= '\0'; i++){
		printf("%c|",nome[i]); 
	}
	i = 0;
	puts("\n CPF dentro do vetor");
	do{
		printf("%c|", cpf[i]);
		i++;
	} while(cpf[i]!= '\0');
	
	i = 0;
	puts("\n RG");
	while(rg[i]!= '\0'){
		printf("%c|", rg[i]);
		i++;
	}
	
	int d = 0;
	for(i = 0;cpf[i] != '\0'; i++){
		docs[d] = rg[i];
		docs[d + 1] = cpf[i];
		d = d + 2;
	}
	puts("\n CPF e RG");
	for(i = 0; i < 24; i++){
		printf("%c|", docs[i]);
	}
	
	
	int j;
	j = 0;
	//fazendo o marshlling
	for(i = 0; cripto[i]!= '\0'; i++){
		cripto[j] = nome[i];
		cripto[j + 1] =  docs[i];
		j = j + 2;
	}
	
	
		//imprimindo o vetor de nome caracter por caracter
	puts("\n CRIPTO dentro do vetor");
	for( i = 0; i < 65; i++){
		printf("%c|",cripto[i]); 
	}
}
