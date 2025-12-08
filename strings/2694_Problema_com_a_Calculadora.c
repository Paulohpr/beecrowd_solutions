#include <stdio.h>

    int main(){

        int n;

        scanf("%d", &n);

        char numeros[n][15];

        for(int i = 0; i < n; i++) // vai ler todos os n "numeros"
            scanf("%s", numeros[i]);
        
        for(int idx = 0; idx < n; idx++){
            int soma = 0;
            int n1 = 0, n2 = 0, n3 = 0;

            n1 = ((numeros[idx][2] - '0') * 10) + (numeros[idx][3] - '0');
            n2 = ((numeros[idx][5] - '0') * 100) + ((numeros[idx][6] - '0') * 10) + (numeros[idx][7] - '0');
            n3 = ((numeros[idx][11] - '0') * 10) + (numeros[idx][12] - '0');
           
            soma = n1 + n2 + n3;
            printf("%d\n", soma);
        }
    }