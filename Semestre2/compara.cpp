/*
	Name: 
	Copyright: 
	Author: 
	Date: 15/09/25 10:14
	Description: 
*/
#include <stdio.h>

void comparar(char *a, char *b);

main(){
	char a[20];
	char b[20];
	
	printf("insira a palavra A\n");
	gets(a);
	printf("Insira a palavra B\n");
	gets(b);
	
	comparar(a,b);
	
}// fim do programa

void comparar(char *a, char *b){
	for(int i = 0;(a[i] != '\0' )&& (b[i] != '\0' ) ; i++){
		//printf("%i|", a);
		printf("\n");
		//printf("%i|", b);
		
		if(a[i] == b[i]){
			printf("Ta correto");
		}else{
			printf("Ta errado");
		}
	}
	
}
