/*
	Name: 
	Author: 
	Date: 24/03/25 15:28
	Description: 
*/
#include <stdio.h>
#include <locale.h>

main(){
setlocale(LC_ALL,"PORTUGUESE");

float peso;
float altura;
float imc = (altura * altura)/ peso;


printf("Insira seu peso!");
scanf("%f", &peso);
printf("Insira sua altura!");
scanf("%F", &altura);

if(imc > 18,5){
	printf("Seu peso esta abaixo do ideal");
} else if (25,0 < imc > 29,9){
	printf("Seu peso esta adequado");
} else if(30,0 < imc > 34,9){
	printf("Esta acima do peso");
} else if(35,0 < imc > 39,0){
	printf("Obesidade");
} else{
	printf("Obesidade mórbida");
}
}





