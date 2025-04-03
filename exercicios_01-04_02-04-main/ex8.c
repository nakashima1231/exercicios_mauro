#include <stdio.h>

int testa_par(int x) {
    return x % 2;
}

int main(void) {

    int par = testa_par(6);
    printf("6 é par? %d\n", !par);
    int par2 = testa_par(7);
    printf("7 é par? %d", !par2);

  return 0;
}