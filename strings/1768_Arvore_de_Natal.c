#include <stdio.h>

int main() {

    int n;

    while (scanf("%d", &n) != EOF) {

        /* Parte de cima da árvore (folhas) */
        for (int i = 1; i <= n; i += 2) {

            int espacos = (n - i) / 2;

            for (int j = 0; j < espacos; j++)
                printf(" ");

            for (int j = 0; j < i; j++)
                printf("*");

            printf("\n");
        }

        /* Tronco: 1 asterisco */
        int esp1 = (n - 1) / 2;
        
        for (int j = 0; j < esp1; j++)
            printf(" ");
        printf("*\n");

        /* Tronco: 3 asteriscos */
        int esp3 = (n - 3) / 2;
        for (int j = 0; j < esp3; j++)
            printf(" ");

            printf("***\n");

        printf("\n"); // Linha em branco entre árvores
    }
}
