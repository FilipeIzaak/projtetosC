/*
	Name: 
	Copyright: 
	Author: 
	Date: 24/03/25 15:40
	Description: 
*/

#include <stdio.h>
#include <locale.h>

main(){
setlocale(LC_ALL,"PORTUGUESE");

int x, y, z, a;

printf("escolha o número para x");
scanf("%i", &x);
printf("escolha o número para y");
scanf("%i", &y);

printf("valor de y %i", y);
printf("valor de y %i", x);
z = 0; a = 0;
z = x; a = y;
y = z; x = a;

printf("valor atual de y %i", y);
printf("valor atual de x %i", x);
}

