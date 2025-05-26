#include <stdio.h>

int main() {
    int mat[4][4];
    int i, j;

    int somaDP = 0;
    int somaDS = 0;
    int acimaDP = 0;
    int abaixoDP = 0;
    int acimaDS = 0;
    int abaixoDS = 0;

    printf("Digite apenas valores 0 ou 1 para preencher a matriz 4x4:\n");

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            do {
                printf("mat[%d][%d]: ", i, j);
                scanf("%d", &mat[i][j]);
                if(mat[i][j] != 0 && mat[i][j] != 1) {
                    printf("Valor inválido. Digite apenas 0 ou 1.\n");
                }
            } while(mat[i][j] != 0 && mat[i][j] != 1);
        }
    }

    // Processamento das somas
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            if(i == j)
                somaDP += mat[i][j];
            if(i + j == 3)
                somaDS += mat[i][j];
            if(i < j)
                acimaDP += mat[i][j];
            if(i > j)
                abaixoDP += mat[i][j];
            if(i + j < 3)
                acimaDS += mat[i][j];
            if(i + j > 3)
                abaixoDS += mat[i][j];
        }
    }

    // Impressão das somas
    printf("\nSoma da Diagonal Principal (DP): %d\n", somaDP);
    printf("Soma da Diagonal Secundária (DS): %d\n", somaDS);
    printf("Soma Acima da DP: %d\n", acimaDP);
    printf("Soma Abaixo da DP: %d\n", abaixoDP);
    printf("Soma Acima da DS: %d\n", acimaDS);
    printf("Soma Abaixo da DS: %d\n", abaixoDS);

    // Determinar a maior soma
    int maior = somaDP;
    char nome[30] = "Diagonal Principal";

    if(somaDS > maior) { maior = somaDS; sprintf(nome, "Diagonal Secundária"); }
    if(acimaDP > maior) { maior = acimaDP; sprintf(nome, "Acima da DP"); }
    if(abaixoDP > maior) { maior = abaixoDP; sprintf(nome, "Abaixo da DP"); }
    if(acimaDS > maior) { maior = acimaDS; sprintf(nome, "Acima da DS"); }
    if(abaixoDS > maior) { maior = abaixoDS; sprintf(nome, "Abaixo da DS"); }

    printf("\nMaior soma: %d (%s)\n", maior, nome);

    return 0;
}


