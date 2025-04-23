#include <stdio.h>
#include "igualdade.h"

int main()  {
    int x, y;

    printf("Digite um número: ");
    scanf("%d", &x);

    printf("Digite um número: ");
    scanf("%d", &y);

    if (igual(x, y) == 1) {
        printf("Iguais: Sim\n");
    } else {
        printf("Iguais: Não\n");
        printf("Maior: %d\n", maior(x, y));
        printf("Menor: %d\n", menor(x, y));
    }

    return 0;
}