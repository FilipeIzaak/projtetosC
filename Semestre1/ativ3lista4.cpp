#include <stdio.h>

int main(){
	int i, num, maiorNum, menorNum;
	
	for(i = 0; i <5; i++){
		printf("Digite o %i º", i);
		scanf("%i", &num);
		
		if(num > maiorNum){
			maiorNum = num;
		}
		if( num < menorNum){
			menorNum = num; 
		}
	}
	printf("Este é o maior numero %i", maiorNum);
	printf("Este é o menor número %i", menorNum);
}
