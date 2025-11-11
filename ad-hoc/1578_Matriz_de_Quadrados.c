#include <stdio.h>

    int main(){

        int n, m, cont = 4;

        scanf("%d", &n);

        for(int idx = 0; idx < n; idx++){
            scanf("%d", &m);
            int matriz[m][m];
            
            for(int i = 0; i < m; i++){
                for(int j = 0; j < m; j++){
                    scanf("%d", &matriz[i][j]);
                }
            }


            printf("Quadrado da matriz #%d\n", cont);
            cont++;

            for(int i = 0; i < m; i++){
                for(int j = 0; j < m; j++){
                    printf(" %d ", matriz[i][j]*matriz[i][j]);
                }
                printf("\n");
            }
        }

        }

    