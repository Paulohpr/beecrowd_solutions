#include <stdio.h>

    int superprimo(int x){
        int temp = 0;
        int d = 0;
            
        do{
            d++;
            temp = x % 10; 
            
            if(temp < 2)
                return 0; // n eh primo

            for(int i = 2; i < x; i++){
                if(temp % i == 0){
                    return 0; // n eh primo
                }  
            }
               

        } while (d > 0);
        
        return 1; // primo
    }

        int primo(int x){
        
            if(x < 2)
                return 0; // n eh primo

            for(int i = 2; i < x; i++){
                if(x % i == 0){
                    return 0; // n eh primo
                }  
            }

        return 1; // primo
    }


    int main(){

        int n;

        while(scanf("%d", &n), n != EOF){
              
            if(primo(n) == 1 && superprimo(n) == 1)
                printf("Super\n");
            else if(primo(n) == 1)
                printf("Primo\n");
            else 
                printf("Nada\n");
                
        }


    }