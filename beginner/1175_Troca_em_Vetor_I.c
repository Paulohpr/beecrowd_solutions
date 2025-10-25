#include <stdio.h>
    
    int main(){

        int n[20];
        int vet, temp = 0;

        vet = 19;

        for(int i = 0; i < 20; i++)
            scanf("%d", &n[i]);

        for(int i = 0; i < 10; i++){
            temp = n[i];
            
            n[i] = n[vet];
            n[vet] = temp;

            vet = vet - 1;
        }

        for(int i = 0; i < 20; i++)
            printf("N[%d] = %d\n", i, n[i]);
        
    }