#include <stdio.h>

    int main(){

        int t; 
        int dinheiro, ingredientes, bolos;

        scanf("%d", &t);

        for(int i = 0; i < t; i++){
            scanf("%d %d %d", &dinheiro, &ingredientes, &bolos);
            
            int precos[ingredientes];

            for(int idx = 0; idx < ingredientes; idx++){ // vai pegar o i precos de cada ingrediente
                scanf("%d", &precos[idx]);
            }

            int qtdIDIFF = 0, indice = 0, qtdI = 0, contBOLOS = 0, maior = 0;

            for(int id = 0; id < bolos; id++){ // descreve cada bolo
                scanf("%d", &qtdIDIFF); // 0 == qtd de ingrediente diff, 1 = indice do ingrediente, 2 = qtd de ingredientes
                
                int custobolo = 0;

                for(int ii = 0; ii < qtdIDIFF; ii++){
                    scanf("%d %d", &indice, &qtdI);

                    custobolo += precos[indice] * qtdI;
                    }
                    contBOLOS = dinheiro / custobolo;

                    if(contBOLOS > maior)
                        maior = contBOLOS;
                }
                printf("%d\n", maior);
            }

            

        }
    