#include <stdio.h>
#include <string.h>

int main() {
    FILE *pArquivo = NULL;
    pArquivo = fopen("remedios.txt", "r");
    char destino[80];

    while (fgets(destino, sizeof(destino), pArquivo) != NULL) {
    }

    fgets(destino, 80, pArquivo);
    printf("%s", destino);
    
    fclose(pArquivo);
    return 0;
}