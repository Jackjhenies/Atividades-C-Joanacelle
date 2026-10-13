#include <stdio.h>

int main() {
    int passos;             // passos dados na hora atual
    int total = 0;          // total de passos acumulados
    int horas = 0;          // quantidade de horas registradas

    // O laço repete enquanto o total for menor que a meta de 10.000
    while (total < 10000) {
        horas = horas + 1;  // conta mais uma hora

        printf("Passos dados na hora %d: ", horas);
        scanf("%d", &passos);

        // Soma os passos da hora ao total
        total = total + passos;

        printf("Total ate agora: %d passos\n\n", total);
    }

    // Quando sai do laço, a meta foi atingida ou ultrapassada
    printf("Meta atingida! Total de passos: %d\n", total);
    printf("Horas necessarias: %d\n", horas);

    return 0;
}