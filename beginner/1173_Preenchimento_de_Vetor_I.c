#include <stdio.h>

    int main(){
        
        int n; 

        scanf("%d", &n);
        int vet[10];

        vet[0] = n;

        for(int i = 1; i < 10; i++)
            vet[i] = vet[i-1] * 2;
        

        for(int i = 0; i < 10; i++)
            printf("N[%d] = %d\n", i, vet[i]);

    }