#include <stdio.h>
#include <math.h>

#define pi 3.14159

    int main(){ 

        long double area, raio;

        scanf("%Lf", &raio);
        
        area = pi * pow(raio, 2);

        printf("A=%.4Lf\n", area);

    }