#include <stdio.h>

int main() {
    int x;
    int resto;
    
    printf("Digite um número:");
    scanf("%d", &x);

    resto = x % 2;
    
    if (resto == 0) {
        printf("O numero é par.");
    }
    
    if (resto == 1) {
        printf("O numero é ímpar.");
    }

    return 0;
}