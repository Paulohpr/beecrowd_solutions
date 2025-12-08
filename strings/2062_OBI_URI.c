#include <stdio.h>
#include <string.h>

    int main(){

        int n;
        
        scanf("%d", &n);
        char palavra[n][21];

        for(int i = 0; i < n; i++)// ler todas as palavras
            scanf("%s", palavra[i]);

        for(int idx = 0; idx < n; idx++){
            if(strlen(palavra[idx]) == 3 && (palavra[idx][0] == 'O') && (palavra[idx][1] == 'B'))
                printf("OBI");
            else if(strlen(palavra[idx]) == 3 && (palavra[idx][0] == 'U') && (palavra[idx][1] == 'R'))
                printf("URI");
            else   
                printf("%s", palavra[idx]);  
           
            if(idx != n-1)
            printf(" ");
        }
        printf("\n");
    }