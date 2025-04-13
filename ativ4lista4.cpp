#include <stdio.h>

int main() {
    int num, numero, posinum, negnum;
    int posi, neg, i;
    float media, percneg, percposi;

    // Inicializa todas as vari�veis
    posi = neg = posinum = negnum = 0;

    printf("Escolha quantos n�meros quiser: ");
    scanf("%d", &num);

    for(i = 0; i < num; i++) {
        printf("\nDigite o %d� n�mero: ", i + 1);
        scanf("%d", &numero);

        if(numero > 0) {
            posinum += numero;
            posi++;
        } else {
            negnum += numero;
            neg++;
        }
    }

    // Evita divis�o por zero
    if (num > 0) {
        media = (float)(posinum + negnum) / num;
        percposi = (float)posi * 100 / num;
        percneg = (float)neg * 100 / num;

        printf("\nQuantidade de n�meros positivos: %d", posi);
        printf("\nQuantidade de n�meros negativos: %d", neg);
        printf("\nM�dia aritm�tica de todos os n�meros: %.2f", media);
        printf("\nPorcentagem de positivos: %.2f%%", percposi);
        printf("\nPorcentagem de negativos: %.2f%%", percneg);
    } else {
        printf("Nenhum n�mero foi informado.");
    }

    return 0;
}

