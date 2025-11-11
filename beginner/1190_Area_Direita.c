#include <stdio.h>

    int main(){

        char letra;
        float mat[12][12];
        float soma = 0, media = 0;

        scanf("%c", &letra);

        for(int i = 0; i < 12; i++){ // preencher a matriz
            for(int j = 0; j < 12; j++){
                scanf("%f", &mat[i][j]);
            }
        }

        for(int i = 0; i < 12; i++){ // somar area direita
            for(int j = 0; j < 12; j++){      
                if(j > i && i + j > 11)
                    soma += mat[i][j];
        }
        }
        
        media = soma/30;

        if(letra == 'S')
            printf("%.1f\n", soma);
        else
            printf("%.1f\n", media);

    }
