#include <stdio.h>

int main(){
	
	int i, pop, nfilhos, maxfilhos, sal, maiorSal, menor;
	float maxsal, mediasal, perc, mediaFIlhos;
	
	printf("Qual o npumero da população");
	scanf("%i", &pop);
	
	i = 1;
	while( i < 5){
		printf("Quantos filhso tem o cidadão n %i º \n", i);
		scanf("%i", &nfilhos);
		
		printf("Quanto o cidadão n %i  º recebe \n", i);
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
	printf("Este é a media de filhos por pessoa %f \n", mediaFIlhos);
	mediasal = maxsal / pop;
	printf("Este é a media de filhos por pessoa %f \n", mediasal);
	printf("este é o maior salario da população %i \n", maiorSal);
	printf("esta é a porcentagem de cidadãos que recebem menos que 1000 %i  %", perc);
}
