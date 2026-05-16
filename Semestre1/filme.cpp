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

int idade;

printf("informe a idade");
scanf("%i", &idade);

if (idade <9 ){
	printf("Filme livre ");
	
}
else if (10 > idade > 11 ){
	printf("Permitido apenas acima de 10 anos ");
}else if (12 > idade > 13 ){
	printf("Permitido apenas acima de 12 anos ");
}
else if(14 > idade > 15) {
	printf("Permitido apenas acima de 14 anos ");
}else if(16 > idade > 18)`{
	printf("Permitido apenas acima de 16 anos ");
} else { 
	printf("filme para adulto");
}
}

