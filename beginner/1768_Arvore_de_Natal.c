#include <stdio.h>
#include <string.h>

    int main(){

        int n;

        while(scanf("%d", &n) != EOF){
            if(n % 2 == 0)
                return 0;
            
            char tree[n+1];
           
            for(int i = 0; i <= n; i++) // preencher a string tree com '*'
                tree[i] = '*';
    
            tree[n+1] = '\0';

            for(int idx = 1; idx < n; idx+= 2){
                printf("%s\n", tree);

                // entender como tirar de 2 em 2

            } 

            int tam = (strlen(tree)/2) - 1;
            
            for(int id = 0; id < tam; id++)
                printf(" ");

            printf(" *\n");

            for(int id = 0; id < tam; id++)
                printf(" ");
            
            printf("***\n");

        }
    }