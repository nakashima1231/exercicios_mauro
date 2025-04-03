#include <stdio.h>

int main() {
    int tent = 1;
    int resp;
    int fim = 3;
    
    do {
        printf("Digite a primeira tentativa: ");
        scanf("%d", &resp);
        
        if (resp == 7) {
            puts("você ganhou!");
            tent = 3;
        } else {
            if (tent != 3) {
                printf("Número errado. Tentativas restantes: %d\n", fim - tent);
            } else {
                puts("Fim de jogo!");
            }
        }
            tent++;
    } while (tent <= fim);
    
    return 0;   
}