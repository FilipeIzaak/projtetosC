#include <stdio.h>

int main(){
	int i, num, maiorNum, menorNum;
	
	for(i = 0; i <5; i++){
		printf("Digite o %i �", i);
		scanf("%i", &num);
		
		if(num > maiorNum){
			maiorNum = num;
		}
		if( num < menorNum){
			menorNum = num; 
		}
	}
	printf("Este � o maior numero %i", maiorNum);
	printf("Este � o menor n�mero %i", menorNum);
}
