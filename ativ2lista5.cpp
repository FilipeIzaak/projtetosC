#include <stdio.h>

int main() {
    char sexo[5];
    int idade[5];
    float altura[5];
    int i = 0;

    while(i < 5) {
        printf("Esta é a %iª pessoa\n", i + 1);

        printf("Qual seu sexo (M/F): ");
        scanf(" %c", &sexo[i]); // espaço antes do %c para ignorar enter

        printf("Qual sua altura (em metros): ");
        scanf("%f", &altura[i]);

        printf("Qual sua idade: ");
        scanf("%i", &idade[i]);

        i++;
        printf("\n"); // separador entre as pessoas
    }

    printf("\nVETOR CARREGADO:\n");

    for(i = 0; i < 5; i++) {
        printf("Pessoa %i -> Sexo: %c | Idade: %i | Altura: %.2f\n", i + 1, sexo[i], idade[i], altura[i]);
    }

    return 0;
}

