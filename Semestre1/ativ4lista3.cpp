#include <stdio.h>

int main() {
    int num;
    int i = 0;
    int totalPositivos = 0;
    int totalNegativos = 0;
    int qtdPositivos = 0;
    int qtdNegativos = 0;

    while (i < 12) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &num);

        if (num >= 0) {
            totalPositivos += num;
            qtdPositivos++;
        } else {
            totalNegativos += num;
            qtdNegativos++;
        }

        i++;
    }

    printf("\nQuantidade de positivos: %d", qtdPositivos);
    printf("\nQuantidade de negativos: %d", qtdNegativos);
    printf("\nSoma dos positivos: %d", totalPositivos);
    printf("\nSoma dos negativos: %d\n", totalNegativos);

    return 0;
}

