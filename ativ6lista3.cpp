#include <stdio.h>

int main() {
    int i, j;
    float nota, acumu, media;

    int totalAlunos = 7;
    int aprovados = 0;
    int reprovados = 0;
    int exame = 0;

    char aluno[100];

    for (i = 0; i < totalAlunos; i++) {
        acumu = 0;

        printf("\nNome do aluno: ");
        scanf(" %[^\n]", aluno); // nome com espaço

        for (j = 0; j < 4; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &nota);
            acumu += nota;
        }

        media = acumu / 4.0;
        printf("Média de %s: %.2f\n", aluno, media);

        if (media >= 6) {
            printf("Resultado: Aprovado ?\n");
            aprovados++;
        } else if (media >= 4 && media < 6) {
            printf("Resultado: Exame ??\n");
            float notaNecessaria = 12 - media;
            printf("Nota necessária no exame para aprovação: %.2f\n", notaNecessaria);
            exame++;
        } else {
            printf("Resultado: Reprovado ?\n");
            reprovados++;
        }
    }

    // Cálculo dos percentuais
    float percAprov = (aprovados * 100.0) / totalAlunos;
    float percReprov = (reprovados * 100.0) / totalAlunos;

    // Resultados finais
    printf("\n=== RELATÓRIO FINAL ===");
    printf("\nTotal de alunos: %d", totalAlunos);
    printf("\nAprovados: %d (%.1f%%)", aprovados, percAprov);
    printf("\nReprovados: %d (%.1f%%)", reprovados, percReprov);
    printf("\nAlunos que farão exame: %d", exame);
    printf("\n========================\n");

    return 0;
}

