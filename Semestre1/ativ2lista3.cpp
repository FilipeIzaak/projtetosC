#include <stdio.h>

int main() {
    int num;
    int i;
    int maior;
    int menor;

    for (i = 0; i < 8; i++) {
        printf("Insira o %dº número: ", i + 1);
        scanf("%d", &num);

        if (i == 0) {
            // Na primeira vez, inicializa os dois com o primeiro número
            maior = num;
            menor = num;
        } else {
            if (num > maior) {
                maior = num;
            }
            if (num < menor) {
                menor = num;
            }
        }
    }

    printf("\nO maior número lido foi: %d", maior);
    printf("\nO menor número lido foi: %d\n", menor);

    return 0;
}

