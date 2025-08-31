#include <stdio.h>


int main(){
	double area, n;
	double raio;
	
	n = 3.14159;
	scanf("%lf",&raio);
	
	area = n * (raio * raio);
	
	printf("A=%.4lf", area);
}
