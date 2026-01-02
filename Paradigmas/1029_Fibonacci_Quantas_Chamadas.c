#include <stdio.h>

    int chamadas;

    int fib(int n) {
        if (n == 0) 
            return 0;
        
        if (n == 1) 
            return 1;
        
        chamadas++; 
        return fib(n - 1) + fib(n - 2);
    }

    int main() {
        int n, x;

        scanf("%d", &n);

       for(int i = 0; i < n; i++){
            scanf("%d", &x);

            chamadas = 0;        
            int resultado = fib(x);

            printf("fib(%d) = %d calls = %d\n", x, chamadas*2, resultado);
       }
    }
