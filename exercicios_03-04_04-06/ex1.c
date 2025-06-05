#include <stdio.h>

int main(void) {
    FILE *pArquivo = NULL;
    int mumLinhas = 0;
    pArquivo = fopen("nomes.txt", "r");
    char destino[80];

    while (fgets(destino, sizeof(destino), pArquivo) != NULL) {
        mumLinhas++;
    }
    rewind(pArquivo);


    for(int i = 0; i < mumLinhas; i++){
        fgets(destino, 80, pArquivo);
        printf("%s", destino);
        
    }

    printf("\n");
    fclose(pArquivo);
    return 0;
}
