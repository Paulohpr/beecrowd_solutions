#include <stdio.h>
#include <string.h>

int main() {

    char letra;
    char palavras[1001];

    scanf("%c", &letra);
    getchar();

    scanf("%[^\n]", palavras);

    int tam = strlen(palavras);
    int contp = 1;         
    int cont = 0;          
    int achou = 0;         

    for (int i = 0; i <= tam; i++) {

        if (palavras[i] == letra)
            achou = 1;

        if (palavras[i] == ' ' || palavras[i] == '\0') {
            if (achou)
                cont++;    
            achou = 0;     
        }
        
        if (palavras[i] == ' ')
            contp++;
    }

    float porc = (cont * 100.0) / contp;

    printf("%.1f\n", porc);

    return 0;
}
