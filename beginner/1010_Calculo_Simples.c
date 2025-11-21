#include <stdio.h>

    int main(){

        int codigo, codigo2, npecas, npecas2;
        float valor, valor2, total;

        scanf("%d %d %f", &codigo, &npecas, &valor);
        scanf("%d %d %f", &codigo2, &npecas2, &valor2);

        printf("VALOR A PAGAR: R$ %.2f\n", total = (valor * npecas) + (valor2 * npecas2));
    }