#include <stdio.h>

    int main(){

        int c;
        char T;
        float m[12][12];
        float soma = 0;

        scanf("%d", &c);
        scanf(" %c", &T);

        for(int i = 0; i < 12; i++){
            for(int j = 0; j < 12; j++){
                scanf("%f", &m[i][j]);
            }
        }

        for(int j = 0; j < 12; j++){
            soma += m[j][c];
        }

        if(T == 'S')
            printf("%.1f\n", soma);
        else   
            printf("%.1f\n", soma/12);
    }