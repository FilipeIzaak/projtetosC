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

printf("Escolha um n�mero");
scanf("%i", &num);

resto = num % 2;

if (resto == 0 ){
	printf("este n�mero � par ");
}
else{
	printf("este n�mero � impar ");
}

}
