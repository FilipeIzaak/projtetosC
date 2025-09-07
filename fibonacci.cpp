/*
	Name: fibonacci
	Copyright: 
	Author: 
	Date: 06/09/25 12:23
	Description: 
*/

#include <stdio.h>

int main() {
    int T, N, i;
    long fib[61]; // até Fib(60) cabe em 64 bits sem sinal

    // pré-calcular Fibonacci até 60
    fib[0] = 0;
    fib[1] = 1;
    for (i = 2; i <= 60; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    // ler número de casos de teste
    scanf("%d", &T);

    for (i = 0; i < T; i++) {
        scanf("%d", &N);
        printf("Fib(%d) = %llu\n", N, fib[N]);
    }

    return 0;
}


