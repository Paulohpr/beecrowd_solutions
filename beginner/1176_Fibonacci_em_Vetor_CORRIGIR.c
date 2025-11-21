#include <stdio.h> // ARRUMA CDG - OVERFLOW

    int main(){

        unsigned long long int v; 
        int temp;
        
        scanf("%lld", &v);

        unsigned long long int fib[v];
        fib[0] = 0;
        fib[1] = 1;

        for(int i = 2; i < v; i++){
            temp = fib[i-2];
            fib[i] = fib[i - 1] + temp;
        }

        for(int i = 0; i < v; i++)
            printf("Fib(%d) = %lld\n", i, fib[i]);
    }