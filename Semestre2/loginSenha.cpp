/*
	Name: loginsenha
	Copyright: 
	Author: 
	Date: 03/11/25 08:51
	Description: programa para demonstrar a utiulização de recursividade indireta
*/
#include <stdio.h>
#include <string.h>
//prototipação
void verLogin();
void verSenha();

//variaveis globais
char login[] = "Filipe";
int pwd =123;
int i;

main(){
	verLogin();
}

void verLogin(){
	char usuario[20];
	printf("Usuario: ");
	gets(usuario);
	
	if(strcmp(usuario,login) == 0){
		verSenha();
	}else{
		verLogin();
	}
}

void verSenha(){
	int senha;
	printf("Senha: ");
	scanf("%d",&senha);
	
	if(senha == pwd){
		puts("Login efetuado com sucesso");
		return;
	}else{
		while(i < 3){


			if(i >= 3){
				printf("Sua senha foi bloqueada, faça o login novamente");
				verLogin();
			}
			verSenha();
			i++;
		}
	
	}
}
