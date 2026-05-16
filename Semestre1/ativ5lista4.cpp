#include <stdio.h>

int main() {
    int pop = 5;
    int i, idade, quantm = 0, quantf = 0, quantIdade = 0;
    int maxidade = 0;
    char sexo, olhos, cabelo;

    for(i = 0; i < pop; i++) {
        printf("\nCidadão número %d\n", i + 1);

        printf("Qual seu sexo? (m ou f): ");
        scanf(" %c", &sexo); // espaço antes do %c ignora enter anterior

        printf("Qual a cor de seus olhos? (a = azul, v = verde, c = castanhos): ");
        scanf(" %c", &olhos);

        printf("Qual a cor de seu cabelo? (l = loiro, p = preto, c = castanhos): ");
        scanf(" %c", &cabelo);

        printf("Qual sua idade? ");
        scanf("%d", &idade);

        // Cidadão mais velho
        if(i == 0 || idade > maxidade) {
            maxidade = idade;
        }

        // Mulher entre 18 e 35, com cabelo loiro e olhos verdes
        if(sexo == 'f' && idade >= 18 && idade <= 35 && cabelo == 'l' && olhos == 'v') {
            quantf++;
        }

        // Pessoas com olhos azuis ou verdes
        if(olhos == 'a' || olhos == 'v') {
            quantm++;
        }

        // Maiores de idade
        if(idade >= 18) {
            quantIdade++;
        }
    }

    // Resultados
    printf("\nQuantidade de pessoas maiores de idade: %d", quantIdade);
    printf("\nQuantidade de pessoas com olhos azuis ou verdes: %d", quantm);
    printf("\nQuantidade de mulheres entre 18 e 35 anos com cabelo loiro e olhos verdes: %d", quantf);
    printf("\nIdade do cidadão mais velho: %d\n", maxidade);

    return 0;
}

