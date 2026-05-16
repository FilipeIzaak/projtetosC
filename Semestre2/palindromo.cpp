#include <stdio.h>
#include <string.h>

void palindromo(char nome[], int tam);

int main() {
    char nome[30];
    int tam;

    printf("Digite uma palavra: ");
    fgets(nome, sizeof(nome), stdin);

    // Remove o '\n' deixado pelo fgets, se existir
    nome[strcspn(nome, "\n")] = '\0';

    tam = strlen(nome);

    palindromo(nome, tam);

    return 0;
}

void palindromo(char nome[], int tam) {
    int i, j, flag = 1;

    j = tam - 1;

    for (i = 0; i < j; i++, j--) {
        if (nome[i] != nome[j]) {
            flag = 0;
            break;
        }
    }

    if (flag == 1) {
        printf("\nÉ palíndromo!\n");
    } else {
        printf("\nNão é palíndromo.\n");
    }
}


