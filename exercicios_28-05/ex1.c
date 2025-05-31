#include <stdio.h>

int main() {
    char link[] = "<svg version=\"1.1\" "
              "width=\"300\" height=\"200\" "
              "xmlns=\"http://www.w3.org/2000/svg\">"
              "<rect x=\"20\" y=\"30\" width=\"100\" height=\"100\" fill=\"red\" />"
              "</svg>";

    FILE *pArquivo = NULL;
    pArquivo = fopen("quadrado.svg", "w");

    fprintf(pArquivo, "%s", link);


    fclose(pArquivo);
    return 0;
}