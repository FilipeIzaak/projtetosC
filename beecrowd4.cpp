#include <stdio.h>

int main(){
	double a,b,media;
	
	scanf("%lf",&a);
	scanf("%lf",&b);
	
	if(a <=10.0 && b <=10.0){
		media = (a + b)/2;
		
		printf("MEDIA = %.5lf", media);
		
	}else{
		printf("Erro");
	}
	return 0;
}// fim do programa
