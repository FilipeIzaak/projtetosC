/*
	Name: 
	Copyright: 
	Author: 
	Date: 03/11/25 10:40
	Description: 
*/

#include <stdio.h>
#include <math.h>

void verificar(int);
void ehpar(int);

main(){
	int num = 0;
	printf("Digite o numero par");
	scanf("%d",&num);
	
	
	verificar(num);
}

void verificar(int num){
	int resul;
	if(num % 2 == 0){
		ehpar(num);
	}else{
		resul = num * num * num;
		printf("%d", resul);
		printf("\n esse numer nao é par, faz de novo\n");
		printf("Digite outro numero: ");
        scanf("%d", &num);
		verificar(num);
	}
}

void ehpar(int num){

	if(num >=100){
		return;
	} 

	printf("%d ", num);
    ehpar(num + 2); 

}
