#include <stdio.h>
#include <string.h>

    int main(){

        int n;

        scanf("%d", &n);
        char numeros[n][6];

        for(int i = 0; i < n; i++){
            scanf("%s", numeros[i]);
            getchar();
        }
        
        for(int idx = 0; idx < n; idx++){
            int tam = strlen(numeros[idx]);
            
            if((tam == 3) && (numeros[idx][0] == 'o' && numeros[idx][1] == 'n') || (numeros[idx][1] == 'n' && numeros[idx][2] == 'e') || (numeros[idx][0] == 'o' && numeros[idx][2] == 'e'))
                printf("1\n");
            else if((tam == 3) && (numeros[idx][0] == 't' && numeros[idx][1] == 'w') || (numeros[idx][1] == 'w' && numeros[idx][2] == 'o') || (numeros[idx][0] == 't' && numeros[idx][2] == 'o'))
                printf("2\n");
            else 
                printf("3\n");
        }

    }