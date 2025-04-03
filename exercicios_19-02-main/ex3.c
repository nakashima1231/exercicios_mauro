#include <stdio.h>

int main(void) {
    float peso;
    float altura ;
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    
    float imc = peso / (altura * altura);
    printf("imc: %f", imc);
}
