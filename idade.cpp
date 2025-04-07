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

printf("informe sua idade");
scanf("%i", &idade);

if (idade < 2){
	printf("Você é um bebê ");
	
}else if (3 > idade > 10 ){
	printf("Você é uma criança ");
}
else if(11 > idade > 19) {
	printf("Você é um adolescente");
} else if(20 > idade > 65)`{
	printf("Você é um adulto");
} else { 
	printf("voce é um idoso");
}
}
}
