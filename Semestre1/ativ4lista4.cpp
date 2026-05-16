#include <stdio.h>

int main() {
    int num, numero, posinum, negnum;
    int posi, neg, i;
    float media, percneg, percposi;

    // Inicializa todas as variáveis
    posi = neg = posinum = negnum = 0;

    printf("Escolha quantos números quiser: ");
    scanf("%d", &num);

    for(i = 0; i < num; i++) {
        printf("\nDigite o %dº número: ", i + 1);
        scanf("%d", &numero);

        if(numero > 0) {
            posinum += numero;
            posi++;
        } else {
            negnum += numero;
            neg++;
        }
    }

    // Evita divisão por zero
    if (num > 0) {
        media = (float)(posinum + negnum) / num;
        percposi = (float)posi * 100 / num;
        percneg = (float)neg * 100 / num;

        printf("\nQuantidade de números positivos: %d", posi);
        printf("\nQuantidade de números negativos: %d", neg);
        printf("\nMédia aritmética de todos os números: %.2f", media);
        printf("\nPorcentagem de positivos: %.2f%%", percposi);
        printf("\nPorcentagem de negativos: %.2f%%", percneg);
    } else {
        printf("Nenhum número foi informado.");
    }

    return 0;
}

