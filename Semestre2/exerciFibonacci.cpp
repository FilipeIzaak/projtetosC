/*
	Name: 
	Copyright: 
	Author: 
	Date: 12/10/25 11:18
	Description: Fazendo fibonacci sozinho 
*/

#include <stdio.h>


int main(){
	int ant, atual, dps, ele;
	
	ant = atual = 1;
	ele = dps = 0;
	
	printf("Quantos elementos voce quer que tenha?");
	scanf("%d", &ele);
	
	while(ele > 0){
		dps = atual + ant;
		ant = atual;
		atual = dps;
		printf("%d", atual);
		ele--;
	}
	
	
}
