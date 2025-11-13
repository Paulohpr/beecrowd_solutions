#include <stdio.h>

    int verificarsudoku9x9(int m[9][9]){

        for(int i = 0; i < 9; i++){ 
            int valoresaparecem[10] = {0};

            for(int j = 0; j < 9; j++){
                int val = m[i][j];
                if(val < 1 || val > 9)
                    return 0;
                
                valoresaparecem[val]++;

                if(valoresaparecem[val] > 1)
                    return 0;
            }
        }

        for(int j = 0; j < 9; j++){ 
            int valoresaparecem[10] = {0};

            for(int i = 0; i < 9; i++){
                int val = m[i][j];
                if(val < 1 || val > 9)
                    return 0;
                
                valoresaparecem[val]++;

                if(valoresaparecem[val] > 1)
                    return 0;
            }
        }


        return 1;
    }
    
    int verificarsudoku3x3(int m[9][9]) {
        for (int bi = 0; bi < 9; bi += 3) {
            for (int bj = 0; bj < 9; bj += 3) {
                int valoresaparecem[10] = {0};
                for (int i = bi; i < bi + 3; i++) {
                    for (int j = bj; j < bj + 3; j++) {
                        int valor = m[i][j];
                        if (valor < 1 || valor > 9) 
                            return 0;

                        valoresaparecem[valor]++;
                        
                        if (valoresaparecem[valor] > 1) 
                            return 0;
                    }
                }
            }
        }
        return 1;
    }

    int main(){

        int n; 
        int matriz[9][9];

        scanf("%d", &n);

        for(int idx = 1; idx <= n; idx++){
            
            for(int i = 0; i < 9; i++){
                for(int j = 0; j < 9; j++){
                    scanf("%d", &matriz[i][j]);
                }
            }
            
            printf("Instancia %d\n", idx);
            int teste1 = verificarsudoku9x9(matriz);
            int teste2 = verificarsudoku3x3(matriz);

            if(teste1 == 1 && teste2 == 1){
                printf("SIM\n");
            }
            else 
                printf("NAO\n");

            printf("\n");
        }

    }