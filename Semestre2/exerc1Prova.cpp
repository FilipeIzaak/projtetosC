#include <stdio.h>

int calcularPot(int, int);

main(){
	int base, expo,result;
	
	scanf("%d",&base);
	scanf("%d",&expo);
	
	result = calcularPot(base,expo);
	
	printf("%d",result);
}

int calcularPot(int base,int expo){
	int result;
	result = 1;
	
	for(int i = 0; i < expo; i++){
		result = result * base;
	}
	
	return result;
}
