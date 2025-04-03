#include <stdio.h>

int main(void) {
    float peso = 62;
    float altura = 1.61;
    float imc = peso / (altura * altura);
    printf("imc: %f", imc);
  return 0;
}