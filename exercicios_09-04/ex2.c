#include <stdio.h>

int subtrai3(int n);

int main(void) {
  int x;
  printf("Digite um número: ");
  scanf("%d", &x);
  printf("Número recebido: %d\n", x);

  int resultado = subtrai3(x);
  printf("Resultado: %d\n", resultado);
  return 0;
}

int subtrai3(int n) {
  printf("Atual: %d\n", n);
  return n - 3;
}