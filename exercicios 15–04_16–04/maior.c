#include <stdio.h>
#include "igualdade.h"

int ndigitado(void) {
    int x;
    printf("Digite um número: ");
    scanf("%d", &x);
    return x;
}

int main() {
    int n1, n2, n3;
    int x, y;

    n1 = ndigitado();
    n2 = ndigitado();
    n3 = ndigitado();

    x = maior(n1, n2);
    y = maior(n3, x);

    printf("Maior: %d\n", y);

    return 0;
}