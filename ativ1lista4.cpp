#include <stdio.h>

int main(){
	
	int i, pop, nfilhos, maxfilhos, sal, maiorSal, menor;
	float maxsal, mediasal, perc, mediaFIlhos;
	
	printf("Qual o npumero da popula��o");
	scanf("%i", &pop);
	
	i = 1;
	while( i < 5){
		printf("Quantos filhso tem o cidad�o n %i � \n", i);
		scanf("%i", &nfilhos);
		
		printf("Quanto o cidad�o n %i  � recebe \n", i);
		scanf("%i", &sal);
		
		if(nfilhos > 0){
			maxfilhos += nfilhos;
			
		}
		if(sal > 0){
			maiorSal;
			maxsal += sal;
			
		}
		if(sal > maiorSal){
			maiorSal = sal;
		}
		if(sal < 1000){
			menor++;
		}
		
		i++;
	}
		perc = (menor * 100) / pop;
	mediaFIlhos = maxfilhos / pop;
	printf("Este � a media de filhos por pessoa %f \n", mediaFIlhos);
	mediasal = maxsal / pop;
	printf("Este � a media de filhos por pessoa %f \n", mediasal);
	printf("este � o maior salario da popula��o %i \n", maiorSal);
	printf("esta � a porcentagem de cidad�os que recebem menos que 1000 %i  %", perc);
}
