#include <stdio.h>

    int main() {
        int n;
        scanf("%d", &n);

        double x = 0.0;

        for (int i = 0; i < n; i++)
            x = 1.0 / (6.0 + x);

        double resultado = 3.0 + x;

        printf("%.10lf\n", resultado);
    }
