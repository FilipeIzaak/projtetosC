#include <stdio.h>

//variavel global
int itens[5]; 
int inicio = -1, fim = -1;
int tam = 5;

//Prototipacao de funcao
void Enqueue(int); //inserir elemento
int Dequeue(); //retira elemento da fila
int isFull(); //retorna 1 se a fila estiver cheia
int isEmpty(); //retorna 1 se a fila estiver vazia
void imprimirFila(); 

int main(){
	Enqueue(100);
	Enqueue(101);
	Enqueue(102);
	Enqueue(103);
	Enqueue(104);
	imprimirFila();
	Dequeue();
	Dequeue();
	Dequeue();
	imprimirFila();
	Dequeue();
	Dequeue();
	Dequeue();	
imprimirFila();
	
	
}//fim do programa


void Enqueue(int num){
	if(isFull() == 1){
		printf("TA cheio");
	}else{
		if(inicio == -1){
			inicio = 0;
		}
	fim++;	
	itens[fim] = num;
	printf("\nelemento %d inserido na FIFO", num);	
	
	
	}	
}

int Dequeue(){
	int aux;
	if(isEmpty() == 1){
		puts("TA vazio");
	}else{
		aux = itens[fim];
		if(inicio == fim){
			inicio = -1;
			fim = -1;
		}else{
			inicio = (inicio+1);
	}
	printf("\n %d foi excluido da fila", aux);
		return aux;
	}
}


int isFull(){
	if(fim+1 > tam){
		return 1;
	}else{
		return 0;
	}
}

int isEmpty(){
	if(inicio == -1){
		return 1;
	}else{
		return 0;
	}
	
	
}

void imprimirFila(){
		int i;
	if(isEmpty() == 1){
		puts("Fila esta vazia");
	}else{
		puts("\nConteudo da fila");
		for(i = inicio; i != fim; i++){
			printf("%d|",itens[i]);
		}
	}
	
}
