#include <stdio.h>
#include <string.h>

struct filme {
    char nome[30];
    int lancamento;
    float nota;
};


int main() {
    struct filme um;
    FILE *pArquivo = NULL;

    printf("Digite o nome do filme: ");
    fgets(um.nome, sizeof(um.nome), stdin);
    um.nome[strcspn(um.nome, "\n")] = 0;



    printf("Digite o ano de lançamento do filme: ");
    scanf("%d", &um.lancamento);
    printf("Digite a nota do filme: ");
    scanf("%f", &um.nota);

    pArquivo = fopen("filmes.txt", "wb");
    fwrite(&um, sizeof(struct filme), 1, pArquivo);

    fclose(pArquivo);
    return 0;
}