#include <stdio.h>
#define QUATRO 4

int main() {
    float nota[QUATRO];
    float total = 0;

    for(int i = 0; i < QUATRO; i++) {
        printf("Digite a nota: ");
        scanf("%f", &nota[i]);
        total += nota[i];
    }
    printf("O total é: %.2f\n", total);

    return 0;
}
