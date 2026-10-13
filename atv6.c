#include <stdio.h>

int main() {
    int opcao;              // opção escolhida pelo usuário
    float total = 0;        // saldo acumulado no cofrinho

    // O laço repete até o usuário escolher a opção 0 (parar)
    do {
        printf("=== COFRINHO DIGITAL ===\n");
        printf("1 - Adicionar R$0,50\n");
        printf("2 - Adicionar R$1,00\n");
        printf("3 - Adicionar R$2,00\n");
        printf("0 - Parar e mostrar total\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        // Soma o valor da moeda escolhida ao total
        switch (opcao) {
            case 1:
                total = total + 0.50;
                break;
            case 2:
                total = total + 1.00;
                break;
            case 3:
                total = total + 2.00;
                break;
            case 0:
                // Não faz nada, apenas sai do laço
                break;
            default:
                printf("Opcao invalida!\n");
        }

        // Mostra o saldo atual após cada moeda adicionada
        if (opcao >= 1 && opcao <= 3) {
            printf("Saldo atual: R$ %.2f\n", total);
        }

        printf("\n");

    } while (opcao != 0);

    // Exibe o total final
    printf("Total acumulado no cofrinho: R$ %.2f\n", total);

    return 0;
}