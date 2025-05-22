#include <stdio.h>
#include <string.h>

int palindromo(char palavra[], int tamanho) {
    char *frente = palavra;
    char *tras = palavra + tamanho - 1;
    int certo = 1;

    while(frente < tras) {
        if(*frente != *tras) {
            return 0;
        } else {
            frente ++;
            tras --;
        }
    }
    return 1;
}


int main() {
    char palavra[20];
    int tamanho;
    int certo = 1;

    printf("Digite a palavra: ");
    scanf("%19s", palavra);
    tamanho = strlen(palavra);

    if(palindromo(palavra, tamanho)) {
        printf("Palindromo\n");
    } else {
        printf("Nao e palindromo\n");
    }

    return 0;
}