/*
	Name: 
	Copyright: 
	Author: 
	Date: 24/11/25 10:04
	Description: 
*/


#include <stdio.h>

float calcularIMC(float,float);
void classificar(float);

main(){
	float peso, altura, imc;
	printf("Digite seu peso");
	scanf("%f", &peso);
	printf("Digite sua altura");
	scanf("%f", & altura);
	
	imc = calcularIMC(altura, peso);
	
	classificar(imc);
	
}

float calcularIMC(float altura, float peso){
	float imc;
	imc = peso/(altura *altura);
	
	return imc;
}

void classificar(float imc){
	if (imc < 18.5){
        printf("Abaixo do peso\n");
    } 
    else if (imc >= 18.5 && imc <= 24.9){
        printf("Peso normal\n");
    } 
    else if (imc >= 25 && imc <= 29.9){
        printf("Excesso de peso\n");
    } 
    else if (imc >= 30 && imc <= 34.9){
        printf("Obesidade\n");
    } 
    else if (imc >= 35){
        printf("Muita obesidade\n");
    }
}
