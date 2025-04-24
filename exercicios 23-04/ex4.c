#include <stdio.h>
#define TRES 3

int soman (float x[]) {
    int total = 0;
    for(int i = 0; i < TRES; i++) {
        total += x[i];
    }
    return total;
}

int main() {
    float n[TRES];

    for(int i = 0; i < TRES; i++) {
        printf("Digite um número: ");
        scanf("%f", &n[i]);
    }

    printf("O total da soma é: %d\n", soman(n));

    return 0;
}