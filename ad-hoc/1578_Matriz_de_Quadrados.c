#include <stdio.h>

    int main(){

        int n;

        scanf("%d", &n);

        int vet[n];
        
        scanf("%d", &vet[0]);

        int menor = vet[0], pos = 0;

        for(int i = 1; i < n; i++){
            scanf("%d", &vet[i]);
            if(menor > vet[i]){
                menor = vet[i];
                pos = i;
            }
        }

        printf("Menor valor: %d\n", menor);
        printf("Posicao: %d\n", pos);
    }