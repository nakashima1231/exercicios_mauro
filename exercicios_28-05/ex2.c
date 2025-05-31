#include <stdio.h>
#include <string.h>

int main() {
    char nomeArquivo[50] = " ";
    FILE *pArquivo = NULL;
    int xQuad, yQuad;
    int largura, altura;
    
    printf("Digite o nome do arquivo: ");
    scanf("%49s", nomeArquivo);

    printf("Digite o X do quadrado: ");
    scanf("%d", &xQuad);

    printf("Digite o Y do quadrado: ");
    scanf("%d", &xQuad);

    printf("Digite a altura: ");
    scanf("%d", &altura);

    printf("Digite a largura: ");
    scanf("%d", &largura);

    strcat(nomeArquivo, ".svg");
    pArquivo = fopen(nomeArquivo, "w");

        fprintf(pArquivo, "<svg version=\"1.1\" "
                     "width=\"300\" height=\"200\" "
                     "xmlns=\"http://www.w3.org/2000/svg\">\n"
                     "<rect x=\"%d\" y=\"%d\" width=\"%d\" height=\"%d\" fill=\"red\" />\n"
                     "</svg>", 
                     xQuad, yQuad, largura, altura);

    fclose(pArquivo);
    return 0;
}