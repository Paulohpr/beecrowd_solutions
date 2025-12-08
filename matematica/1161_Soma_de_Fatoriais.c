#include <stdio.h>

    int main(){

        unsigned long long int n, m, soma, soma2, somatot;

        while(scanf("%llu %llu", &n, &m) != EOF){
            soma = 1, soma2 = 1; somatot = 0;
            
            if(n == 0)
                soma = 1;
            if(m == 0)
                soma2 = 1;

            for(unsigned long long int i = 1; i <= n; i++)
                soma *= i;
                
            for(unsigned long long int idx = 1; idx <= m; idx++)
                soma2 *= idx;

            somatot = soma + soma2;

            printf("%llu\n", somatot);

        }
    }