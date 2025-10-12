#include <stdio.h>

int comparar(int quadrado[][3], int ordem);

int main() {
    int i, j;
    int quadrado[3][3];

    printf("Digite todas as células do quadrado (linha por linha):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &quadrado[i][j]);			
        }
    }

    int resultado = comparar(quadrado, 3);

    if (resultado) {
        printf("É um quadrado mágico!\n");
    } else {
        printf("Não é um quadrado mágico.\n");
    }

    return 0;
}

int comparar(int quadrado[][3], int ordem) {
    int i, j;
    int somaLinha, somaColuna;
    int somaDiagonalPrincipal = 0;
    int somaDiagonalSecundaria = 0;

    int meta = 0;
    // Usamos a soma da primeira linha como referência
    for(j = 0; j < ordem; j++) {
        meta += quadrado[0][j];
    }

    // Verifica linhas e colunas
    for(i = 0; i < ordem; i++) {
        somaLinha = 0;
        somaColuna = 0;
        for(j = 0; j < ordem; j++) {
            somaLinha += quadrado[i][j];
            somaColuna += quadrado[j][i];
        }
        if(somaLinha != meta || somaColuna != meta) {
            return 0;
        }
    }

    // Verifica diagonal principal
    for(i = 0; i < ordem; i++) {
        somaDiagonalPrincipal += quadrado[i][i];
        somaDiagonalSecundaria += quadrado[i][ordem - i - 1];
    }

    if(somaDiagonalPrincipal != meta || somaDiagonalSecundaria != meta) {
        return 0;
    }

    return 1;
}

