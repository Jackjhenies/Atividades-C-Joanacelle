#include <stdio.h>

int main() {
    float nota;             // nota do cliente atual (0 a 10)
    float soma = 0;         // acumula as notas para calcular a média
    float media;            // média geral das notas
    int i;                  // contador do laço

    // Lê a nota de 10 clientes
    for (i = 1; i <= 10; i++) {
        printf("Nota do cliente %d (0 a 10): ", i);
        scanf("%f", &nota);

        // Se a nota for inválida, pede novamente
        while (nota < 0 || nota > 10) {
            printf("Nota invalida! Digite um valor entre 0 e 10: ");
            scanf("%f", &nota);
        }

        // Soma a nota ao total
        soma = soma + nota;
    }

    // Média = soma das notas dividida pelo número de clientes
    media = soma / 10;

    printf("\nMedia geral do atendimento: %.2f\n", media);

    // Se a média for menor que 7, mostra o alerta
    if (media < 7) {
        printf("ALERTA: a media esta abaixo de 7! O atendimento precisa melhorar.\n");
    }

    return 0;
}