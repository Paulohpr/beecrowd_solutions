#include <stdio.h>

    int main(){

        char O;
        double m[12][12];
        double soma = 0;

        scanf("%c", &O);

        for(int i = 0; i < 12; i++){ // preencher matriz
            for(int j = 0; j < 12; j++){
                scanf("%lf", &m[i][j]);
            }
        }

        for(int i = 0; i < 12; i++){ // somar area superior
            for(int j = 0; j < 12; j++){
                if(j > i && i + j <= 10)
                    soma += m[i][j];
            }
        }

        if(O == 'S') // soma
            printf("%.1lf\n", soma);
        else 
            printf("%.1lf\n", soma/30);

    }