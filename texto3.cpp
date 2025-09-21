/*
	Name: 
	Copyright: 
	Author: 
	Date: 08/09/25 10:43
	Description: 
*/

#include <stdio.h>
#include <string.h>

void inverso(char);

main(){
	char nome[20];
	int tam = 0;
	printf("Nome: ");
	gets(nome);
	
	inverso(nome);
	
	tam = sizeof(nome)/sizeof(char);
	printf("Tamanho do vetor %d", tam);
	printf("Nome DIgitado: %s", nome);
//	for()
}

void inverso(char nome){
	int i;
	for(i = 20; i >20; i--){
		printf("%c|", nome[i]);
	}
}

