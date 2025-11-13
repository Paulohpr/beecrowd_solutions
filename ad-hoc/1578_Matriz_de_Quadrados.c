#include <stdio.h>

    int main(){

        int n, m, cont = 4;
        
        scanf("%d", &n);

        for(int idx = 0; idx < n; idx++){
            scanf("%d", &m);
            unsigned long long int matriz[m][m];
            
            for(int i = 0; i < m; i++){
                for(int j = 0; j < m; j++){
                    scanf("%llu", &matriz[i][j]);
                }
            }

            printf("Quadrado da matriz #%d:\n", cont);
            cont++;

            unsigned long long int salvarquad[m][m];

            for(int i = 0; i < m; i++){
                for(int j = 0; j < m; j++){
                    salvarquad[i][j] = matriz[i][j]*matriz[i][j];
                }
            }
            
            int largura[m];
            
            for(int j = 0; j < m; j++){
                  unsigned long long int maior = salvarquad[0][j];
                for(int i = 0; i < m; i++){
                    if(salvarquad[i][j] > maior)
                        maior = salvarquad[i][j];
                }
            
            int d = 0;
            unsigned long long temp = maior;
            
            do{
                d++;
                temp /= 10;
            }while(temp > 0);
            
            largura[j] = d;
            }
            
            for(int i = 0; i < m; i++){
                for(int j = 0; j < m; j++){
                    if (j == 0)
                        printf("%*llu", largura[j], salvarquad[i][j]);
                    else
                        printf(" %*llu", largura[j], salvarquad[i][j]);
                }
                printf("\n");
            }
            if(idx < n - 1)
                printf("\n");
        }
    }