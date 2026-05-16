/*
	Name: tabuadaRecursiva
	Copyright: 
	Author: 
	Date: 03/11/25 10:16
	Description: Programa que mostra a tabuada de multiplicacao direta
*/

#include <stdio.h>

void exibirTabuada(int);
int num = 0;
main(){
	
	puts("Impressao na tela de uma tabuada de multiplicação");
	printf("Digite o numero que voce quer");
	scanf("%d",&num);
	puts("\n-----------------------------------------------------------");
	exibirTabuada(1);
}


void exibirTabuada(int i){
	if(i == 11){
		return;
	}
	printf("%d * %d = %d\n", num, i, num*i);
	exibirTabuada(++i);
}

