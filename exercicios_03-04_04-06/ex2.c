#include <stdio.h>
#include <string.h>

int main() {
    FILE *pArquivo = NULL;
    char nome[50] = " ";
    char personagem[30] = " ";


    printf("Digite o nome do livro: ");
    scanf("%49s", nome);
    strcat(nome, ".txt");

    pArquivo = fopen(nome, "w");

    do {
        printf("Digite o nome do personagem(Digite SAIR para sair): ");
        scanf("%29s", personagem);
        fprintf(pArquivo, "%s\n", personagem);
    } while (strcmp(personagem,"SAIR") != 0);


    


    fclose(pArquivo);
    return 0;
}