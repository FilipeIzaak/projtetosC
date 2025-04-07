/*	
	Name: calcImc.cpp
	Author: FIlipe Izaak	
	Date: 24/03/25 14:56
	Description: algoritmo para calcular altura e peso e imc
*/
#include <stdio.h>
#include <locale.h>
;
main(){
	
setlocale(LC_ALL,"PORTUGUESE");
	float peso;
	float altura;
	char sexo;
	float imc;
	
	printf("Qual o seu sexo? Identifique com F ou M ");
	scanf("%c", &sexo);
	printf("Qual sua peso? ");
	scanf("%f", &peso);
	printf("Qual seu altura? ");
	scanf("%f", &altura);
	
	if(sexo == 'f'|| sexo == 'F'){
		printf("Você é uma mulher. ");
		
		if(altura < 150){
			printf("altura baixa ");
		}
			else if(151 > altura > 165){
				printf("altura media ");
			}
				else{
					printf("Voce é alta ");
				}
				
				
			}
			else if(sexo == 'm' || sexo == 'M'){
					printf("Você é um homem. ");
		
				if(altura < 160){
				printf("altura baixa");
			}
					else if(161 > altura > 175){
					printf("altura media");
				}
						else{
						printf("Voce é alto");
				}
					
			}
			else {
				printf("O seu sexo não esta registrado");
			}
			
			imc = peso / (altura * altura);
			printf("O seu IMC é %.2f", imc);
			
		}
	


