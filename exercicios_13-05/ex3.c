#include <stdio.h>
#include <string.h>

int recebetamanho(char x[10]) {
    printf("Digite uma palavra: ");
    scanf("%9s", x);
    return strlen(x);
}

void ordena (char y[10], int tamanho) {
    char maior;
    for(int x = 0; x < tamanho - 1; x++) {
        for(int i = 0; i < tamanho - 1; i++) {
            if( y[i] > y[i+1] ) {
                maior = y[i];
                y[i] = y[i+1];
                y[i+1] = maior;
            }
        } 
    }
}

int main() {
    char ana1[10];
    char ana2[10];
    int tamanho1;
    int tamanho2;
    int certo = 1;

    tamanho1 = recebetamanho(ana1);
    tamanho2 = recebetamanho(ana2);

    if(tamanho1 == tamanho2) {
        ordena(ana1, tamanho1);
        ordena(ana2, tamanho2);

        for(int a = 0; a < tamanho1; a++) {
            if(ana1[a] == ana2[a]) {
                certo = 1;
                continue;
            } else {
                printf("Não são anagramas!\n");
                certo = 0;
                break;
            }
        }
    } else {
        printf("Não são anagramas!\n");
        return 0;
    }

    if(certo) {
        printf("São anagramas!\n");
    } else {
        printf("Não são anagramas!\n");
    }

    return 0;
}

    // VERIFICANDO AS VARIAVEL

/* 

    printf("%s ", ana1);
    printf("%s\n", ana2);

    printf("%d ", tamanho1);
    printf("%d\n", tamanho2);

    printf("%c %d \n", ana1[1], (int)ana1[1]);
    printf("%c %d \n", ana1[1], (int)ana2[1]);

    for(int i = 0; i < tamanho1; i++) {
            printf("%c ", ana1[i]);
            printf("%d ", (int)ana1[i]);
        }
        printf("\n");
        for(int i = 0; i < tamanho2; i++) {
            printf("%c ", ana2[i]);
            printf("%d ", (int)ana2[i]);
        }
        printf("\n");
    }

    for(int i = 0; i < tamanho1; i++) {
        printf("%c ", ana1[i]);
        printf("%d ", (int)ana1[i]);
    }
    printf("\n");

    for(int i = 0; i < tamanho2; i++) {
        printf("%c ", ana2[i]);
        printf("%d ", (int)ana2[i]);
    }
    printf("\n");
        */