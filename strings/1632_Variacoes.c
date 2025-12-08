#include <stdio.h>
#include <string.h>

    void variacao(char x[][17], int z){ 
        x[z][17];
        int tam;
        
        for(int i = 0; i < z; i++){
            tam = strlen(x[i]);
            int cont = 1;

            for(int idx = 0; idx < tam; idx++){ 
                if(x[i][idx] == 'A' || x[i][idx] ==  'E' || x[i][idx] ==  'I' || x[i][idx] ==  'O' || x[i][idx] ==  'S' || x[i][idx] == 'a' || x[i][idx] == 'e' || x[i][idx] == 'i' || x[i][idx] == 'o' || x[i][idx] == 's') // variacao de caracteres
                    cont *= 3;
                else if((x[i][idx] >= 'A' && x[i][idx] <= 'Z') || (x[i][idx] >= 'a' && x[i][idx] <= 'z')) // variacao de maiusc minusc
                    cont *= 2;
            }
            printf("%d\n", cont);
        }
    }

    int main(){

        int t;

        scanf("%d", &t);
        getchar();

        char s[t][17];
        
        for(int i = 0; i < t; i++)
            scanf("%s", s[i]);
        
        variacao(s, t);
    }