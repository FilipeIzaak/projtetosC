#include <stdio.h>

int main() {
    int i, n;
    char nome[20];
    char tipo;
    int hobbit, humano, elfo, anao, mago;

    hobbit = humano = elfo = anao = mago = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%s %c", nome, &tipo);

        if (tipo == 'X') {
            hobbit++;
        } else if (tipo == 'M') {
            mago++;
        } else if (tipo == 'H') {
            humano++;
        } else if (tipo == 'E') {
            elfo++;
        } else if (tipo == 'A') {
            anao++;
        }
    }

    printf("%d Hobbit(s)\n", hobbit);
    printf("%d Humano(s)\n", humano);
    printf("%d Elfo(s)\n", elfo);
    printf("%d Anao(oes)\n", anao);
    printf("%d Mago(s)\n", mago);

    return 0;
}

