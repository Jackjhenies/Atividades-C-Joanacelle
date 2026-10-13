#include <stdio.h>

int main() {
    int v[3], i, j, maior, menor, meio = 0, achouMeio = 0;
    int menIg, maiIg, rep = 0, cresc = 1, decresc = 1;

    for (i = 0; i < 3; i++)
        scanf("%d", &v[i]);

    maior = v[0];
    menor = v[0];
    for (i = 1; i < 3; i++) {
        if (v[i] > maior)
            maior = v[i];
        if (v[i] < menor)
            menor = v[i];
    }

    for (i = 0; i < 3 && !achouMeio; i++) {
        menIg = 0;
        maiIg = 0;
        for (j = 0; j < 3; j++) {
            if (v[j] <= v[i])
                menIg++;
            if (v[j] >= v[i])
                maiIg++;
        }
        if (menIg >= 2 && maiIg >= 2) {
            meio = v[i];
            achouMeio = 1;
        }
    }

    for (i = 0; i < 3; i++)
        for (j = i + 1; j < 3; j++)
            if (v[i] == v[j])
                rep++;

    for (i = 0; i < 2; i++) {
        if (v[i] >= v[i + 1])
            cresc = 0;
        if (v[i] <= v[i + 1])
            decresc = 0;
    }

    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    printf("Intermediario: %d\n", meio);

    if (rep == 3)
        printf("Os tres valores sao iguais\n");
    else if (rep > 0)
        printf("Existem valores repetidos\n");
    else
        printf("Nao existem valores repetidos\n");

    if (cresc)
        printf("Ordem crescente\n");
    else if (decresc)
        printf("Ordem decrescente\n");
    else
        printf("Nem crescente nem decrescente\n");

    return 0;
}