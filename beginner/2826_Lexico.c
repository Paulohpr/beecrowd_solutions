#include <stdio.h>
#include <string.h>

    int ordenap(char p[2][20]){
     
        if(p[0][0] < p[1][0]){
            printf("%s\n", p[0]);
            printf("%s\n", p[1]);
            return 0;   
        }
        else if(p[0][0] > p[1][0]){
            printf("%s\n", p[1]);
            printf("%s\n", p[0]);
            return 0;
        }

        int maior;
        
        if(strlen(p[0]) > strlen(p[1]))
            maior = strlen(p[0]);
        else 
            maior = strlen(p[1]);

        for(int i = 1; i < maior; i++){
            
            if(p[0][i] < p[1][i]){
                printf("%s\n", p[0]);
                printf("%s\n", p[1]);
            return 0;   
            }
        
            else if(p[0][i] > p[1][i]){
                printf("%s\n", p[1]);
                printf("%s\n", p[0]);
            return 0;
            }
        }

        printf("%s\n", p[0]);
        printf("%s\n", p[1]);

        return 0;
    }

    int main(){

        char palavras[2][20];

        scanf("%s", palavras[0]);
        scanf("%s", palavras[1]);

        ordenap(palavras);
    }