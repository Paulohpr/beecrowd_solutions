#include <stdio.h>

    int main(){

        int n, menor_valor = 0, pos = 0;

        scanf("%d", &n);

        int vetor[n];

        for(int i = 0; i < n; i++){
            scanf("%d", &vetor[i]);
        }

        menor_valor = vetor[0];

        for(int i = 0; i < n; i++){
            if(menor_valor > vetor[i]){
                menor_valor = vetor[i];
                pos = i;
            }
               
        }

        printf("Menor valor: %d\n", menor_valor);
        printf("Posicao: %d\n", pos);
    }