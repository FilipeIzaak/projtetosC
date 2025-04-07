#include <stdio.h>
#include <string.h>

int main() {
    int pop;
    char sexo;
    int i;
    char nome[100];

    float peso, altura;
    int idade;

    // Homens
    int contHomens = 0;
    float somaAlturaHomens = 0, somaPesoHomens = 0;
    float mediaAlturaHomens = 0, mediaPesoHomens = 0;
    float maiorAlturaHomem = 0, maiorPesoHomem = 0;
    char nomeHomemMaisAlto[100] = "";
    char nomeHomemMaisPesado[100] = "";

    // Mulheres
    int contMulheres = 0;
    float somaAlturaMulheres = 0, somaPesoMulheres = 0;
    float mediaAlturaMulheres = 0, mediaPesoMulheres = 0;
    int maiorIdadeMulher = 0;
    float maiorPesoMulher = 0;
    char nomeMulherMaisVelha[100] = "";
    char nomeMulherMaisPesada[100] = "";

    printf("Quantas pessoas serão analisadas? ");
    scanf("%d", &pop);

    for (i = 0; i < pop; i++) {
        printf("\n--- Pessoa %d ---\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]", nome);

        printf("Sexo (m/f): ");
        scanf(" %c", &sexo);

        printf("Peso (kg): ");
        scanf("%f", &peso);

        printf("Altura (m): ");
        scanf("%f", &altura);

        printf("Idade: ");
        scanf("%d", &idade);

        if (sexo == 'm' || sexo == 'M') {
            contHomens++;
            somaAlturaHomens += altura;
            somaPesoHomens += peso;

            if (altura > maiorAlturaHomem) {
                maiorAlturaHomem = altura;
                strcpy(nomeHomemMaisAlto, nome);
            }

            if (peso > maiorPesoHomem) {
                maiorPesoHomem = peso;
                strcpy(nomeHomemMaisPesado, nome);
            }

        } else if (sexo == 'f' || sexo == 'F') {
            contMulheres++;
            somaAlturaMulheres += altura;
            somaPesoMulheres += peso;

            if (idade > maiorIdadeMulher) {
                maiorIdadeMulher = idade;
                strcpy(nomeMulherMaisVelha, nome);
            }

            if (peso > maiorPesoMulher) {
                maiorPesoMulher = peso;
                strcpy(nomeMulherMaisPesada, nome);
            }

        } else {
            printf("Sexo inválido. Pulando essa pessoa.\n");
        }
    }

    // Cálculos de média
    if (contHomens > 0) {
        mediaAlturaHomens = somaAlturaHomens / contHomens;
        mediaPesoHomens = somaPesoHomens / contHomens;
    }

    if (contMulheres > 0) {
        mediaAlturaMulheres = somaAlturaMulheres / contMulheres;
        mediaPesoMulheres = somaPesoMulheres / contMulheres;
    }

    // Resultados finais
    printf("\n===== RESULTADOS =====");

    if (contHomens > 0) {
        printf("\nMédia de altura dos homens: %.2f m", mediaAlturaHomens);
        printf("\nHomem mais alto: %s (%.2f m)", nomeHomemMaisAlto, maiorAlturaHomem);
        printf("\nHomem mais pesado: %s (%.2f kg)", nomeHomemMaisPesado, maiorPesoHomem);
    } else {
        printf("\nNenhum homem foi registrado.");
    }

    if (contMulheres > 0) {
        printf("\nMédia de altura das mulheres: %.2f m", mediaAlturaMulheres);
        printf("\nMulher mais velha: %s (%d anos)", nomeMulherMaisVelha, maiorIdadeMulher);
        printf("\nMulher mais pesada: %s (%.2f kg)", nomeMulherMaisPesada, maiorPesoMulher);
    } else {
        printf("\nNenhuma mulher foi registrada.");
    }

    printf("\n=========================\n");

    return 0;
}

