/*
	Name: ponteiros
	Author: Filipe Izaak
	Date: 08/09/25 09:56
	Description: Programa para demonstrar o conceito e uso de ponteiros
*/

#include <stdio.h>

main(){
	int a,b,c;
	 a =b=c= 5;
	 int vet1[4];
	 int vet2[5];
	 
	 char respS = 'S';
	 char respN = 'N';
	 printf("\nCnteudo de A: %d", a);
	 printf("\n Endereco da variavel A: %p", &a);
	 printf("\nCnteudo de b: %d", b);
	 printf("\n Endereco da variavel b: %p", &b);
	 printf("\nCnteudo de c: %d", c);
	 printf("\n Endereco da variavel c: %p", &c);
	 printf("\nCnteudo de d: %c", respS);
	 printf("\n Endereco da variavel d: %p", &respS);
	 printf("\nCnteudo de d: %c", respN);
	 printf("\n Endereco da variavel d: %p", &respN);
	 
	 printf("\n endereco dos vetores vet1 %p", &vet1);
	 printf("\n endereco dos vetores vet2 %p", &vet2);
	 printf("\n ultimo enderço do vetor vet1 %p",&vet1[6]);
	 
	 
}
