#include <stdio.h>

int main() {
    int op, n;

    for (;;) {
        printf("\n===== MENU =====\n");
        printf("1 - Verificar numero par ou impar\n");
        printf("2 - Verificar se e positivo ou negativo\n");
        printf("3 - Calcular o quadrado do numero\n");
        printf("4 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &op);

        switch (op) {
            case 1:
                printf("Numero: ");
                scanf("%d", &n);
                if (n % 2 == 0)
                    printf("O numero %d e par\n", n);
                else
                    printf("O numero %d e impar\n", n);
                if (n > 0)
                    printf("O numero %d e positivo\n", n);
                else if (n < 0)
                    printf("O numero %d e negativo\n", n);
                else
                    printf("O numero e zero\n");
                break;
            case 2:
                printf("Numero: ");
                scanf("%d", &n);
                if (n > 0)
                    printf("O numero %d e positivo\n", n);
                else if (n < 0)
                    printf("O numero %d e negativo\n", n);
                else
                    printf("O numero e zero\n");
                break;
            case 3:
                printf("Numero: ");
                scanf("%d", &n);
                printf("O quadrado de %d e %d\n", n, n * n);
                break;
            case 4:
                printf("Encerrando o programa\n");
                return 0;
            default:
                printf("Opcao invalida\n");
        }
    }
}