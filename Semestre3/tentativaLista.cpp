#include <stdio.h>
#include <stdlib.h>

void enqueue(int);
//int dequeue(); 
int isFull();
int isEmpty();
void print();
void menu();

int item[5];
int tam = 5;
int inicio = -1;
int fim = -1; 

int main(){
	
	while(1){
		menu();
	};

	
};

void enqueue(int num){
	if(isFull() == 1){
		puts("Ta cheio, exclua algo para continuar");
	}else{
		if(inicio == -1){
			inicio = 0;
		}
		fim = (fim+1);
		item[fim] = num;
		printf("\nelemento %d inserido na FIFO", num);	
	}
}

int dequeue(){
	int num;
	if(isEmpty() == 1){
		puts("Ta vazio, adicione algo");
	}else{
		num = item[inicio];
		if(inicio == fim){
			inicio = -1;
			fim = -1;
			fim = (fim-1);
		}else{
			inicio = (inicio + 1);
		}
		
	}
}

int isFull(){
	if(fim == 5){
		puts("Ta cheio(isfull)");
		return 1;
	}else{
		puts("tem espaço(isfull)");
		return 0;
	}
}

int isEmpty(){
	if(tam == -1){
		puts("Esta vazio(isEmpty)");
		return 1;
	}else {
		puts("ta cheio(isEmpty)");
	}
}

void print(){
	if(isEmpty() == 1){
		puts("Ta vazio, coloque algo para imprimir");
	}
	for(int i = inicio; i <= fim; i++){
		printf("%d|", item[i]);
	}
}

void menu(){
	system("cls");
	int opc = 0;
	puts(" Menu de opções da pilha");
	printf(" 1 - insira um numero na fila \n 2 - exclua um numero da fila\n 3 - veja oque tem para imprimir da fila \n 4 - sair");
	scanf("%d",&opc);
	int num = 0;
	
	switch(opc){
		case 1 : printf("\n Digite o que quer acrescentar na fila");
				 scanf("%d", &num);
				 enqueue(num);
				 break;
		case 2 : printf("\n Voce vai excluir um item da fila");
				 dequeue();
				 break;
		case 3 : printf("\n Veja o que tem na fila");
				 print();
				 break;
		case 4 : exit(0);
				 break;
		default: puts("\n Opcao invalida");
	}
	system("pause");
	
	
	
}
