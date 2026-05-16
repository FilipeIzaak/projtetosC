/*
	Name: trocador
	Author: Filipe Izaak
	Date: 08/09/25 08:35
	Description: 
*/


#include <stdio.h>
// sessao de prototipacao
void trocar(int *,int *);


main(){
	int a,b,aux;
	a = b = aux = 0;
	
	printf("Digite o valor de A:");
	scanf("%d",&a);
	printf("Digite o valor de B:");
	scanf("%d",&b);
	
	trocar(&a,&b);
	
	printf("\n%d", a);
	printf("\n%d", b);
	
}//fim do programa

//sessao de funcoes
void trocar(int * a, int * b){
	//int aux = 0;
	//aux = *a;
	//*a = *b;
	//*b = aux;
	*a = *a * *b;
	*b = *a / *b;
	*a = *a / *b;
}

