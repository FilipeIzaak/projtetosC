#include <stdio.h>

main()
{
	int num;
	int i;
	int positivo;
	int negativo;
	int totalposi;
	int totalnega;
	
	i = 0;
	positivo = 0;
	negativo = 0;
	
	
	while(i < 12){
		printf(" Digite o número \n");
		scanf("%i", &num);
		i++;
		
		if(num > 0){
			totalposi = totalposi + num;
			positivo++;
			
		}else{
			totalnega = totalnega +num;
			negativo++;
		}
	}
	 printf("\n Total de números positivos: %d\n", positivo);
	 printf("\n Total de números negativos: %d\n", negativo);
	 printf("\n Soma toal de números positivos: %d\n", totalposi);
	 printf("\n Soma total de números negativos: %d\n", totalnega);
	
	
	
	

}
