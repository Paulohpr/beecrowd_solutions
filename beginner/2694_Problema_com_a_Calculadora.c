#include <stdio.h>
#include <string.h>

    int main(){

        int n;
        
        scanf("%d", &n);
        getchar();

        char relatorios[n][15];
        char valores[3][15];

        for(int i = 0; i < n; i++)
            scanf("%s", relatorios[i]);
        
        for(int idx = 0; idx < n; idx++){
            int tam = strlen(relatorios[idx]);

            for(int id = 0; id < tam; id++){
                if(relatorios[idx][id] >= '0' && relatorios[idx][id] <= '9')
                    valores[idx][id] = relatorios[idx][id];
            }


        }

        
        
    }