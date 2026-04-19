#include <stdio.h>
#include <stdlib.h>


void push(int );
int pop();
int isFull();
int isEmpty();
void print();
void menu();

int topo = -1;
int vetor[5];

int main(){
	while(1){
		menu();
	}
}


void push(int num){
	if(isFull() == 1){
		puts("Ta cheio, esvazie para adicionar");
	}else{
		if(topo == -1){
			topo = 0;
		}
			vetor[topo] = num;
			topo++;
			printf("Elemento %d empilhado!", num);
	}
}

int pop(){
	int aux = 0;
	if(isEmpty() == 1){
		puts("Ta vazio, adicione algo para excluir");
	}else{
		aux = vetor[topo];
		topo--;
		printf("n\%d foi retirado da pilha", aux);
		return aux;
		
	}
}

int isFull(){
	if(topo == 4){
		return 1;
	}else {
		return 0;
	}
}
int isEmpty(){
	if(topo == -1){
		return 1;
	}else{
		return 0;
	}
}

void print(){
	int i;
	if(isEmpty() == 1){
		puts("Esta vazio a pilha, insira algo antes");
	}else{
		for(i = topo;i >= 0;i--){
			printf("%d|", vetor[i]);
		}
	}
}

void menu(){
	system("cls");
	int opc = 0;
	puts(" Menu de opções da pilha");
	printf(" 1 - insira um numero na pilha \n 2 - exclua um numero da pilha\n 3 - veja oque tem para imprimir da pilha \n 4 - sair");
	scanf("%d",&opc);
	int num = 0;
	
	switch(opc){
		case 1 : printf("\n Digite o que quer acrescentar na pilha");
				 scanf("%d", &num);
				 push(num);
				 break;
		case 2 : printf("\n Voce vai excluir um item da pilha");
				 pop();
				 break;
		case 3 : printf("\n Veja o que tem na pilha");
				 print();
				 break;
		case 4 : exit(0);
				 break;
		default: puts("\n Opcao invalida");
	}
	system("pause");
}
