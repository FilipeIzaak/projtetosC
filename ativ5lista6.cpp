#include <stdio.h>

int main() {
    int matriz[10][10];  // Tamanho m�ximo fixo
    int vetor[100];      // Suporta at� matriz 10x10
    int ordem;
    int i, j, k = 0;

    printf("Digite a ordem da matriz quadrada (m�x 10): ");
    scanf("%d", &ordem);

    if (ordem > 10 || ordem < 1) {
        printf("Ordem inv�lida! Digite um valor entre 1 e 10.\n");
        return 1;
    }

    // Entrada dos valores da matriz
    printf("\n--- Preenchendo a Matriz ---\n");
    for(i = 0; i < ordem; i++) {
        for(j = 0; j < ordem; j++) {
            printf("Digite o valor para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Transfer�ncia da matriz para o vetor
    for(i = 0; i < ordem; i++) {
        for(j = 0; j < ordem; j++) {
            vetor[k++] = matriz[i][j];
        }
    }

    // Impress�o da matriz
    printf("\n--- Matriz ---\n");
    for(i = 0; i < ordem; i++) {
        for(j = 0; j < ordem; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

    // Impress�o do vetor
    printf("\n--- Vetor ---\n");
    for(i = 0; i < ordem * ordem; i++) {
        printf("%4d", vetor[i]);
    }
    printf("\n");

    return 0;
}

