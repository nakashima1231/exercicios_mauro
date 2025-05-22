#include <stdio.h>
#include <string.h>

void inverte(char palavra[], int tamanho) {

    while(*palavra != '\0') {
        palavra++;
    }
    palavra--;

    for(int i= 0; i < tamanho; i++) {
        printf("%c", *palavra);
        palavra--;
    }
    printf("\n");
}


int main() {
    char palavra[20];
    int tamanho;

    printf("Digite a palavra: ");
    scanf("%19s", palavra);
    tamanho = strlen(palavra);
    inverte(palavra, tamanho);

    return 0;
}