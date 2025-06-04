#include <stdio.h>

main(){
	int binario[20];
	int num;
	int i;
	int bit;
	
	printf("Insira o seu número, para se tornar em Binário");
	scanf("%i", &num);
	
	while(num > 0){
		bit = num - (num / 2) * 2;
		binario[i] = bit;
		i++;
		num = num/2;
	}
	
	printf("Binário: ");
    for (int j = i - 1; j >= 0; j--) {
    	 printf("%d", binario[j]);
    }
}

