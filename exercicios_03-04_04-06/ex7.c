#include <stdio.h>

struct filme {
    char nome[30];
    int lancamento;
    float nota;
};


int main() {
    struct filme retorno;
    FILE *pArquivo = NULL;
    pArquivo = fopen("filmes.txt", "rb");

    fread(&retorno, sizeof(struct filme), 1, pArquivo);
    fclose(pArquivo);

    printf("Nome do filme: %s\nAno de lançamento: %d\nNota: %f\n", retorno.nome, retorno.lancamento, retorno.nota);

    
    return 0;
}