#include <stdio.h>

int main() {
    char nome[100], cripto[200];
    int docs[100];
    char c;
    int i = 0, j = 0, k = 0;

    // ==========================
    // Leitura do nome
    printf("Digite seu nome completo: ");
    while ((c = getchar()) != '\n' && i < 100) {
        nome[i] = c;
        i++;
    }
    int tamanhoNome = i;

    // ==========================
    // Leitura do CPF
    printf("Digite seu CPF (somente números): ");
    while ((c = getchar()) != '\n' && j < 100) {
        if (c >= '0' && c <= '9') {
            docs[j] = c - '0'; // converte caractere pra número
            j++;
        }
    }

    // ==========================
    // Leitura do RG
    printf("Digite seu RG (somente números): ");
    while ((c = getchar()) != '\n' && j < 100) {
        if (c >= '0' && c <= '9') {
            docs[j] = c - '0';
            j++;
        }
    }

    int tamanhoDocs = j;

    // ==========================
    // Criação do vetor Cripto
    int tamanhoCripto = 0;
    int indexNome = 0, indexDocs = 0;
    while (indexNome < tamanhoNome || indexDocs < tamanhoDocs) {
        if (indexNome < tamanhoNome) {
            cripto[tamanhoCripto++] = nome[indexNome++];
        }
        if (indexDocs < tamanhoDocs) {
            cripto[tamanhoCripto++] = docs[indexDocs++] + '0'; // converte número pra caractere
        }
    }

    // ==========================
    // Mostrar resultado
    printf("\nVetor Nome:\n");
    for (int x = 0; x < tamanhoNome; x++) {
        printf("%c ", nome[x]);
    }

    printf("\n\nVetor Docs:\n");
    for (int x = 0; x < tamanhoDocs; x++) {
        printf("%d ", docs[x]);
    }

    printf("\n\nVetor Cripto:\n");
    for (int x = 0; x < tamanhoCripto; x++) {
        printf("%c ", cripto[x]);
    }

    printf("\n");

    return 0;
}

