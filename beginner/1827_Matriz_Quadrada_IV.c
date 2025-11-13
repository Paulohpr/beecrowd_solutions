#include <stdio.h>

    int main(){

        int n;

        while(scanf("%d", &n) != EOF){
            
            int matriz[n][n];
            
            for(int i = 0; i < n; i++){ // preenche toda a matriz com 0
                for(int j = 0; j < n; j++){
                    matriz[i][j] = 0;
                }
            }

            for(int i = 0; i < n; i++) { // preenche com 2 e 3 diagonal principal e secundaria
                matriz[i][i] = 2;
                matriz[i][n - 1 - i] = 3;
            }

            int inicio = n / 3;  // preenche com 1 
            int fim = n - n / 3;
            for(int i = inicio; i < fim; i++){
                for(int j = inicio; j < fim; j++){
                    matriz[i][j] = 1;
                }
            }

            matriz[n/2][n/2] = 4; // meio da matriz

            for(int i = 0; i < n; i++){ // printa a matriz
                for(int j = 0; j < n; j++){
                    printf("%d", matriz[i][j]);
                }
                printf("\n");
            }

            printf("\n");

        }

    }