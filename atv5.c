#include <stdio.h>

int main() {
    float consumo;          // consumo de água do morador atual (m³)
    float soma = 0;         // acumula o consumo total para calcular a média
    float media;            // consumo médio geral
    int i;                  // contador do laço

    // Lê o consumo dos 5 moradores
    for (i = 1; i <= 5; i++) {
        printf("Consumo do morador %d (m3): ", i);
        scanf("%f", &consumo);

        // Soma o consumo atual ao total
        soma = soma + consumo;

        // Verifica se o consumo está dentro do limite de 20 m³
        if (consumo <= 20) {
            printf("Morador %d: consumo dentro da media.\n\n", i);
        } else {
            printf("Morador %d: consumo ACIMA da media.\n\n", i);
        }
    }

    // Média geral = total consumido dividido pelo número de moradores
    media = soma / 5;

    printf("Consumo medio geral: %.2f m3\n", media);

    return 0;
}