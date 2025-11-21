#include <stdio.h>
#include <math.h> // se nao quiser essa biblioteca, basta fazer r * r * r
#define PI 3.14159

    int main(){

        int r;
        double tot;

        scanf("%d", &r);
        printf("VOLUME = %.3lf\n", tot = (4.0/3) * PI * pow(r, 3)); // pow(base, expoente) - funcao para potencias
    }