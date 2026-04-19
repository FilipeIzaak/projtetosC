#include <stdio.h>
#include <stdlib.h>

int pilha[5];
int topo = -1;

void push(int);
int isFull();
int isEmpty();
int pop();
void imprimirPilha();
void menu();

int main(){
	while(1){ // Loop infinito
        menu();
    }
    return 0;
	
}

void push(int num){
	if(isFull() == 1){
		puts("Exclua algo para que possa acrescentar");
	}else{
		topo++;
		pilha[topo] = num;
		printf("Elemento %d empilhado!", num);
	}
}

int pop(){
	int aux = 0;
	
	if(isEmpty() == 1){
		puts("Esta vazio, acrescente algo para que possa ser excluido");
	}else{
		aux = pilha[topo];
		topo--;
		printf("n\%d foi retirado da pilha", aux);
		return aux;
	}
}

int isEmpty(){
	if(topo == -1){
		puts("Sua pilha esta vazia");
		return 1;
	}else{
		return 0;
	}
}
int isFull(){
	if(topo == 4){
		puts("Sua pilha esta cheia");
		return 1;
	} else {
		return 0;
	}
}

void imprimirPilha(){
	int i;
	if(isEmpty() == 1){
		puts("Esta vazio a pilha, insira algo antes");
	}else{
		for(i = topo;i >= 0;i--){
			printf("%d|", pilha[i]);
		}
	}
}

void menu(){
	system("cls");
	int opc = 0;
	puts(" Menu de opções da pilha");
	printf(" 1 - insira um numero na pilha \n 2 - exclua um numero da pilha\n 3 - veja oque tem para imprimir da pilha \n 4 - sair");
	scanf("%d",&opc);
	int elem = 0;
	
	switch(opc){
		case 1 : printf("\n Digite o que quer acrescentar na pilha");
				 scanf("%d", &elem);
				 push(elem);
				 break;
		case 2 : printf("\n Voce vai excluir um item da pilha");
				 pop();
				 break;
		case 3 : printf("\n Veja o que tem na pilha");
				 imprimirPilha();
				 break;
		case 4 : exit(0);
				 break;
		default: puts("\n Opcao invalida");
	}
	system("pause");
}
