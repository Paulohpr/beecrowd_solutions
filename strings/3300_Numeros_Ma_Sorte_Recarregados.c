#include <stdio.h>
#include <string.h>

    int main(){

        char numero[101];

        scanf("%s", numero);

        int tam = strlen(numero);

        for(int i = 0; i < tam; i++){
            if(numero[i] == '1' && numero[i+1] == '3'){
                printf("%s es de Mala Suerte\n", numero);
                return 0;
            }
        }
        printf("%s NO es de Mala Suerte\n", numero);
    }