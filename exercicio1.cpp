/*
	Name: exercicio1
	Copyright: 
	Author: 
	Date: 24/11/25 08:09
	Description: potencia
*/

#include <stdio.h>

int calcularPotencia(int, int);

main(){
	int base, expo, result;
	base = expo = result = 0;
	
	printf("Digita a base");
	scanf("%d",&base);
	printf("Digita o expoente");
	scanf("%d",&expo);
	
	calcularPotencia(base, expo);
	
	//printf("\n%d", result);
}


int calcularPotencia(int base, int expo){
	int i;
	int result;
	result = 1;
	
	for(i = 0; i < expo; i++){
		result = result * base;
	}
	printf("\n%d", result);
	return result;
}
