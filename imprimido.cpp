/*
	Name: ImprimeInvertido.cpp
	Author: Filipe Izaak 
	Date: 15/09/25 09:02
	Description: 
*/
#include <stdio.h>
#include <string.h>
void inverter(char[]);

main(){
	char nome[20];
	int tam = 0;
	printf("Nome: ");
	gets(nome);
	
	for(int i = 0;nome[i] != '\0'; i++){
		printf("%c|",nome[i]);
}
	printf("\n");
	tam = sizeof(nome)/sizeof(char);	
	inverter(nome);

}

void inverter(char nome[]) {
    int tam = strlen(nome);

    for(int i = tam - 1; i >= 0; i--) {
        printf("%c|", nome[i]);
    }
}

