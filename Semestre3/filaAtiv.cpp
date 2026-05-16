#include <stdio.h>

int item[5];
int inicio = -1, fim = -1;
int tam = 5;

void enqueue(int);
int deequeue();
int isFull();
int isEmpty();
void imprimirFila();


main(){
	
	enqueue(100);
	enqueue(202);
	isFull();
	isEmpty();
	imprimirFila();
	deequeue();
	imprimirFila();
	
}
void enqueue(int num){
	if(isFull() == 1){
		puts("A fila esta cheia, exclua um item para adicionar algo");
	}else{
		if(inicio == -1){
			inicio = 0;
		}
		fim = (fim+1);
		item[fim] = num;
		printf("\n elemento %d inserido na fila", num);
	}
}

int deequeue(){
	int num;
	if(isEmpty() == 1){
		puts("A fila esta vazia, adicione algo para que possa excluir");
	}else{
		num = item[inicio];
		if(inicio == fim){
			inicio = -1;
			fim = -1;
		} else{
			inicio = (inicio+1);
		}
		printf("\n %d foi excluido da fila", num);
		return num;
	}
}
	

int isFull(){
	if(fim+1 == tam){
		return 1;
	} else {
		return 0;
	}
}

int isEmpty(){
	if(inicio == -1){
		return 1;
	}else {
		return 0;
	}
}

void imprimirFila(){
	int i;
	if(isEmpty() == 1){
		puts("A fila esta vazia");
	}else{
		puts("tem conteudo na fila");
		for(i = inicio; i <= fim; i++){
			printf("%d|", item[i]);
		}
	}
}
