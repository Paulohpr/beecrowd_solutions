#include <stdio.h>

    int main(){

        int l; 
        char T;
        float soma = 0;
        float m[12][12];

        scanf("%d", &l);
        scanf(" %c", &T);

        for(int i = 0; i < 12; i++){
            for(int j = 0; j < 12; j++){
                scanf("%f", &m[i][j]);
            }
        }

        for(int j = 0; j < 12; j++){
            soma += m[l][j];
        }

        if(T == 'S') // soma
            printf("%.1f\n", soma);
        else  
            printf("%.1f\n", soma/12);
    }