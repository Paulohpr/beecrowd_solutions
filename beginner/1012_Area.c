#include <stdio.h>

    int main(){

        double a, b, c, t;

        scanf("%lf %lf %lf", &a, &b, &c);
        printf("TRIANGULO: %.3lf\n", t = (a * c)/ 2);
        printf("CIRCULO: %.3lf\n", t = 3.14159 * (c * c));
        printf("TRAPEZIO: %.3lf\n", t = ((a + b) * c)/2);
        printf("QUADRADO: %.3lf\n", t = b * b);
        printf("RETANGULO: %.3lf\n", t = a * b);
    }