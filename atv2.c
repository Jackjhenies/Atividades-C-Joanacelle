#include <stdio.h>

int main() {
    int v[6] = {200, 100, 50, 20, 10, 5};
    int est[6], disp[6], melhor[6], q[6];
    int valor, i, soma, total, melhorTotal = -1;

    printf("Informe o estoque de cada nota (200 100 50 20 10 5): ");
    for (i = 0; i < 6; i++)
        scanf("%d", &est[i]);

    printf("Valor do saque: ");
    scanf("%d", &valor);

    if (valor <= 0 || valor % 5 != 0) {
        printf("Valor invalido\n");
        return 0;
    }

    for (i = 0; i < 6; i++) {
        if (est[i] > 0)
            disp[i] = est[i] - 1;
        else
            disp[i] = 0;
    }

    for (q[0] = 0; q[0] <= disp[0] && q[0] * v[0] <= valor; q[0]++)
    for (q[1] = 0; q[1] <= disp[1] && q[1] * v[1] <= valor; q[1]++)
    for (q[2] = 0; q[2] <= disp[2] && q[2] * v[2] <= valor; q[2]++)
    for (q[3] = 0; q[3] <= disp[3] && q[3] * v[3] <= valor; q[3]++)
    for (q[4] = 0; q[4] <= disp[4] && q[4] * v[4] <= valor; q[4]++)
    for (q[5] = 0; q[5] <= disp[5] && q[5] * v[5] <= valor; q[5]++) {
        soma = 0;
        total = 0;
        for (i = 0; i < 6; i++) {
            soma += q[i] * v[i];
            total += q[i];
        }
        if (soma == valor && (melhorTotal == -1 || total < melhorTotal)) {
            melhorTotal = total;
            for (i = 0; i < 6; i++)
                melhor[i] = q[i];
        }
    }

    if (melhorTotal == -1) {
        printf("Saque impossivel sem violar a reserva de uma nota de cada denominacao\n");
        return 0;
    }

    printf("Saque realizado:\n");
    for (i = 0; i < 6; i++)
        if (melhor[i] > 0)
            printf("%d nota(s) de R$ %d\n", melhor[i], v[i]);
    printf("Total de cedulas: %d\n", melhorTotal);

    return 0;
}