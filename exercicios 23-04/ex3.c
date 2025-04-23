#include <stdio.h>
#define QUATRO 4

int main() {
    float nota[QUATRO];
    float media = 0;

    for(int i = 0; i < QUATRO; i++) {
        printf("Digite a nota: ");
        scanf("%f", &nota[i]);
        media += nota[i];
    }

    media /= QUATRO;

    printf("A média é: %.2f\n", media);

    return 0;
}