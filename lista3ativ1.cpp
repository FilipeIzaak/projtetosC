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
		printf(" Digite o n�mero \n");
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
	 printf("\n Total de n�meros positivos: %d\n", positivo);
	 printf("\n Total de n�meros negativos: %d\n", negativo);
	 printf("\n Soma toal de n�meros positivos: %d\n", totalposi);
	 printf("\n Soma total de n�meros negativos: %d\n", totalnega);
	
	
	
	

}
