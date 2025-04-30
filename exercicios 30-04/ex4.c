#include <stdio.h>
#include <string.h>

int main() {
    char palavra[5];
    char letra;
    char * posicao;
    int tentativas = 3;

    printf("Digite uma palavra de até 5 letras: ");
    scanf("%s", palavra);

    do {
        tentativas--;
        
        printf("Digite uma letra: ");
        scanf(" %c", &letra);

        posicao = strchr(palavra, letra);

        if( posicao != NULL ) {
            printf("Posicao: %s\n", posicao);
            break;
        } else {
            printf("Nao encontrada! Tentativas restantes: %d\n", tentativas);
        }

    }while(tentativas > 0);

    



    return 0;
}