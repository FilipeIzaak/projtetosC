/*
	Name: filme
	Copyright: 
	Author: FIlipe Izaak
	Date: 07/09/25 11:17
	Description: 
*/


#include <stdio.h>

int main(){
	double a,b,aumento;
	a = b = 0.00;
	
	scanf("%lf",&a);
	scanf("%lf",&b);
	
	aumento = ((b - a) / a) * 100.0;
	
	printf("%.2lf%%\n",aumento);
}
