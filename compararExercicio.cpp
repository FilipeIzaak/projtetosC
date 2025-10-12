/*
	Name: 
	Copyright: 
	Author: 
	Date: 12/10/25 12:09
	Description: compara as duas palavras
*/
#include <stdio.h>

void comparar(char *a, char *b);

int main(){
	char a[20];
	char b[20];
	
	gets(a);
	gets(b);
	
	comparar(a,b);
}

void comparar(char *a,char *b){
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
