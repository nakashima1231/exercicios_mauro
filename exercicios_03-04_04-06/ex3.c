#include <stdio.h>
#include <string.h>

int main() {
    FILE *pArquivo = NULL;
    char nome[50] = " ";
    int numLinhas = 0;
    char destino[80];
    char continua[1];

    printf("Digite o título do livro: ");
    scanf("%49s", nome);
    strcat(nome, ".txt");
    pArquivo = fopen(nome, "r");

    do {
        fgets(destino, 80, pArquivo);
        printf("%s", destino);

        printf("P para continuar; F para finalizar: ");
        scanf(" %s", continua);
    } while(strcmp(continua, "F") != 0);

    fclose(pArquivo);
    return 0;
}

/*

    while (fgets(destino, sizeof(destino), pArquivo) != NULL) {
        numLinhas++;
    }
    rewind(pArquivo);
*/