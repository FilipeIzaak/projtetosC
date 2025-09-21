/*
	Name: 
	Author: 
	Date: 15/09/25 10:26
	Description: 
*/

#include <stdio.h>

void retirar(char * frase);

main(){
	char frase[20];
	
	printf("Digite sua frase\n");
	gets(frase);
	
	retirar(frase);

}//fim do programa

void retirar(char *frase){
	for(int i = 0;frase[i] != '\0'; i++){
		char c = frase[i];
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
			printf(" ");
		}else{
			printf("%c|", frase[i]);
		}
	}
}

