#include <stdio.h>

void subtrai3(int *n);

int main(void) {
  int x;
  printf("Digite um número: ");
  scanf("%d", &x);
  printf("Número recebido: %d\n", x);

  subtrai3(&x);
  printf("Resultado: %d\n", x);
  return 0;
}

void subtrai3(int *n) {
  *n = *n - 3;
  printf("Atual: %d\n", *n);
}