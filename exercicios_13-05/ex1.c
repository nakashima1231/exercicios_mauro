#include <stdio.h>
#include <string.h>

int main() {
    char palavra[11];
    int tamanho = 0;
    int certo = 1;

    printf("Digite uma palavra: ");
    scanf("%10s", palavra);
    tamanho = strlen(palavra);
    
    for(int i =0; i <= tamanho / 2; i++) {
        if(palavra[i] == palavra[tamanho - 1 - i]) {
            certo = 1;
            continue;
        } else {
            certo = 0;
            break;
        }
    }

    if (certo) {
        printf("É um palíndromo\n");
    } else {
        printf("Não é um palíndromo\n");
    }

    return 0;
}
