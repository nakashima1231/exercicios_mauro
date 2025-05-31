#include <stdio.h>
#include <string.h>

int abertura(FILE *pArquivo);
int retangulo(FILE *pArquivo);
int circulo(FILE *pArquivo);
int fechamento(FILE *pArquivo);
int linha(FILE *pArquivo);
int texto(FILE *pArquivo);

int main() {
    char forma;
    char nomeArquivo[50] = " ";
    FILE *pArquivo = NULL;

    printf("Digite o nome do arquivo: ");
    scanf("%49s", nomeArquivo);
    strcat(nomeArquivo, ".svg");

    pArquivo = fopen(nomeArquivo, "w");
    if (pArquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    if (abertura(pArquivo) == 0) {
        printf("Erro ao escrever no arquivo.\n");
        fclose(pArquivo);
        return 1;
    }

    do {
        printf("Digite a forma desejada (R = retangulo; C = círculo; L = linha; T = texto; F para sair!): ");
        scanf(" %c", &forma);

        switch(forma) {
            case 'R':
                retangulo(pArquivo);
                break;

            case 'C':
                circulo(pArquivo);
                break;

            case 'L':
                linha(pArquivo);
                break;

            case 'T':
                texto(pArquivo);
                break;

            case 'F':
                printf("Saindo...\n");
                break;

            default:
                printf("Forma inválida. Tente novamente.\n");
                break;
        }
    } while (forma != 'F');

    if (fechamento(pArquivo) == 0) {
        printf("Erro ao fechar o arquivo.\n");
    }

    fclose(pArquivo);
    return 0;
}

int abertura(FILE *pArquivo) {
    int retorno = fprintf(pArquivo, "<svg version=\"1.1\" ");
    if (retorno < 0) return 0;

    retorno = fprintf(pArquivo, "width=\"300\" height=\"200\" ");
    if (retorno < 0) return 0;

    retorno = fprintf(pArquivo, "xmlns=\"http://www.w3.org/2000/svg\">");
    if (retorno < 0) return 0;

    return 1;
}

int fechamento(FILE *pArquivo) {
    int retorno = fprintf(pArquivo, "</svg>");

    if (retorno < 0) {
    return 0;
    }

    return 1;
}

int retangulo(FILE *pArquivo) {
    int xadado, yadado, largura, altura;

    printf("Digite o X do retangulo: ");
    scanf("%d", &xadado);
    printf("Digite o Y do retangulo: ");
    scanf("%d", &yadado);
    printf("Digite a altura: ");
    scanf("%d", &altura);
    printf("Digite a largura: ");
    scanf("%d", &largura);

    int retorno = fprintf(pArquivo, "<rect x=\"%d\" y=\"%d\" width=\"%d\" height=\"%d\" fill=\"red\" />", xadado, yadado, largura, altura);
    
    if (retorno < 0) {
    return 0;
    } 

    return 1;
}

int circulo(FILE *pArquivo) {
    int xirculo, yirculo, raio;
    printf("Digite o X do círculo: ");
    scanf("%d", &xirculo);
    printf("Digite o Y do círculo: ");
    scanf("%d", &yirculo);
    printf("Digite o raio do círculo: ");
    scanf("%d", &raio);

    int retorno = fprintf(pArquivo, "<circle cx=\"%d\" cy=\"%d\" r=\"%d\"/>", xirculo, yirculo, raio);
    
    if (retorno < 0) {
    return 0;
    }

    return 1;
}

int linha(FILE *pArquivo) {
    int x1, x2, y1, y2;

    printf("Digite o X1 da linha: ");
    scanf("%d", &x1);
    printf("Digite o Y1 da linha: ");
    scanf("%d", &y1);
    printf("Digite o X2 da linha: ");
    scanf("%d", &x2);
    printf("Digite o Y2 da linha: ");
    scanf("%d", &y2);

    int retorno = fprintf(pArquivo, "<line x1=\"%d\" y1=\"%d\" x2=\"%d\" y2=\"%d\" stroke=\"black\" />", x1, y1, x2, y2);
    
    if (retorno < 0) {
    return 0;
    }

    return 1;
}

int texto(FILE *pArquivo) {
    char texto[100];
    int xlinha, ylinha;

    printf("Digite o X da linha: ");
    scanf("%d", &xlinha);
    printf("Digite o Y da linha: ");
    scanf("%d", &ylinha);
    getchar(); // Limpa o buffer
    printf("Digite texto: ");
    fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto, "\n")] = 0; // Remove o '\n'

    int retorno = fprintf(pArquivo, "<text x=\"%d\" y=\"%d\" font-size=\"20\" fill=\"black\">%s</text>", xlinha, ylinha, texto);

    if (retorno < 0) {
         return 0;
    }

    return 1;
}
   
