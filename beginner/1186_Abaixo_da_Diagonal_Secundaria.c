#include <stdio.h>

    int main(){

        char O;
        float m[12][12];
        float soma;
        
        scanf("%c", &O);

        for(int i = 0; i < 12; i++){
            for(int j = 0; j < 12; j++){
                scanf("%f", &m[i][j]);
            }
        }

        for(int i = 0; i < 12; i++){
            for(int j = 0; j < 12; j++){
                if(i + j > 11)
                    soma += m[i][j];
            }
        }
        
        if(O == 'S') // soma
            printf("%.1f\n", soma);
        else   
            printf("%.1f\n", soma/66);
    }