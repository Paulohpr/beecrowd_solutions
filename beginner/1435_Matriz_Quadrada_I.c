#include <stdio.h>

    int main(){

        int n;

        scanf("%d", &n);

        while(n != 0){
            int matriz[n][n];

            int camadas = (n + 1) / 2;

            for (int k = 0; k < camadas; k++) {
                for (int i = k; i < n - k; i++) {
                    for (int j = k; j < n - k; j++) {
                        matriz[i][j] = k + 1;
                    }
                }
            }
           
            for(int i = 0; i < n; i++){ 
                for(int j = 0; j < n; j++){  
                    printf("%3d", matriz[i][j]);
                    if (j < n - 1)
                        printf(" ");
                }
                printf("\n");
            }
            printf("\n");
            scanf("%d", &n);
        }
    }