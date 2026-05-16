/*
	Name: crypto2 
	Author: Filipe Izaak
	Date: 08/09/25 07:59
	Description: programa para cifrar uma mensagem realizando o "merge" 
	entre dois vetores de caracteres
*/


#include <stdio.h>

//sessão de prototipação
void merge(char[],char[]);

//variaveis globais
int i,j;
char crypto[40];

main(){
	i = j = 0;
	char nome[20];
	char docs[20];
	
	printf("Digite seu nome; \n ");
	gets(nome);
	printf("Digite seu RG e CPF: \n");
	gets(docs);
	
	merge(nome,docs);//invocar a funçãoo
	puts("texto cifrado \n");
	for( j = 0; crypto[j] != '\0'; j++){
		printf("%c|", crypto[j]);
	}
	
}//fim do programa

//sessão de funções
void merge(char nome[],char docs[]){
	for(i = 0;nome[i] != '\0'; i++){
		crypto[j] = nome[i];
		crypto[j+1] = docs[i];
		j = j + 2;
	}
}
