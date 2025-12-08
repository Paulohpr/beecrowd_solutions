#include <stdio.h>
#include <string.h>

    int quantosled(char l[][1001], int z){

        for(int i = 0; i < z; i++){
            int tam = strlen(l[i]);
            int ledtot = 0;
            
            for(int idx = 0; idx < tam; idx++){ // da pra usar switch case
                if(l[i][idx] == '1')
                    ledtot += 2;
                else if(l[i][idx] == '2')
                    ledtot += 5;
                else if(l[i][idx] == '3')
                    ledtot += 5;
                else if(l[i][idx] == '4')
                    ledtot += 4;
                else if(l[i][idx] == '5')
                    ledtot += 5;
                else if(l[i][idx] == '6')
                    ledtot += 6;
                else if(l[i][idx] == '7')
                    ledtot += 3;
                else if(l[i][idx] == '8')
                    ledtot += 7;
                else if(l[i][idx] == '9')
                    ledtot += 6;
                else if(l[i][idx] == '0')
                    ledtot += 6;
            }
            printf("%d leds\n", ledtot);
        }

    }

    int main(){

        int n;

        scanf("%d", &n);
        char led[n][1001];

        for(int i = 0; i < n; i++)
            scanf("%s", led[i]);
        
        quantosled(led, n);
    }