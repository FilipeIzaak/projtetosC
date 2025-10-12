#include <stdio.h>

int main() {
    int ordem1, ordem2, ordem3;
    int i, j, k;

    // Leitura das dimensões
    printf("Digite a quantidade de linhas da matriz 1: ");
    scanf("%d", &ordem1);
    
    printf("Digite a quantidade de colunas da matriz 1 (e linhas da matriz 2): ");
    scanf("%d", &ordem2);
    
    printf("Digite a quantidade de colunas da matriz 2: ");
    scanf("%d", &ordem3);

    // Declaração das matrizes após saber as dimensões
    int mat1[ordem1][ordem2];
    int mat2[ordem2][ordem3];
    int mat3[ordem1][ordem3];

    // Leitura da matriz 1
    printf("\nDigite os elementos da matriz 1 (%dx%d):\n", ordem1, ordem2);
    for (i = 0; i < ordem1; i++) {
        for (j = 0; j < ordem2; j++) {
            printf("mat1[%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    // Leitura da matriz 2
    printf("\nDigite os elementos da matriz 2 (%dx%d):\n", ordem2, ordem3);
    for (i = 0; i < ordem2; i++) {
        for (j = 0; j < ordem3; j++) {
            printf("mat2[%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    // Inicializa matriz resultado com zero
    for (i = 0; i < ordem1; i++) {
        for (j = 0; j < ordem3; j++) {
            mat3[i][j] = 0;
        }
    }

    // Multiplicação das matrizes
    for (i = 0; i < ordem1; i++) {
        for (j = 0; j < ordem3; j++) {
            for (k = 0; k < ordem2; k++) {
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // Exibe resultado
    printf("\nResultado da multiplicacao (matriz %dx%d):\n", ordem1, ordem3);
    for (i = 0; i < ordem1; i++) {
        for (j = 0; j < ordem3; j++) {
            printf("%5d ", mat3[i][j]);
        }
        printf("\n");
    }

    return 0;
}

