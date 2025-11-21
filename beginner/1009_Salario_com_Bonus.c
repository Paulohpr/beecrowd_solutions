#include <stdio.h>

    int main(){

        char nome[20];
        double sal, totalv, total;

        scanf("%s", nome); 
        scanf("%lf", &sal);
        scanf("%lf", &totalv);

        printf("TOTAL = R$ %.2lf\n", total = sal + (totalv * 15)/100);
    }