#include <stdio.h>
#define DOIS 2

float media(float x[]) {
    float total = 0;
    for(int i = 0; i < DOIS; i++) {
        total += x[i];
    }
    return total/DOIS;
}

void dobro(float x[]) {
    for(int i = 0; i < DOIS; i++) {
        x[i] *= 2;
    }
}

int main() {
    float numeros[DOIS];
    float mediaa;

    for(int i = 0; i < DOIS; i++) {
        printf("Digite um número: ");
        scanf("%f", &numeros[i]);
    }

    for(int i = 0; i < DOIS; i++) {
        printf("numero[%d] = %f\n", i, numeros[i]);
    }

    mediaa = media(numeros);
    printf("A média é: %f\n", mediaa);
    
    printf("Vetores antes do dobro: %f\n", numeros[1]);
    printf("Vetores antes do dobro: %f\n", numeros[0]);

    dobro(numeros);

    printf("Vetores depois do dobro: %f\n", numeros[1]);
    printf("Vetores depois do dobro: %f\n", numeros[0]);

    return 0;
}