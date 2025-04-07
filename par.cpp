/*
	Name: 
	Copyright: 
	Author: 
	Date: 24/03/25 15:40
	Description: 
*/

#include <stdio.h>
#include <locale.h>

main(){
setlocale(LC_ALL,"PORTUGUESE");

int num;
int resto;

num = 0;

printf("Escolha um número");
scanf("%i", &num);

resto = num % 2;

if (resto == 0 ){
	printf("este número é par ");
}
else{
	printf("este número é impar ");
}

}
