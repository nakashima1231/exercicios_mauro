#include <stdio.h>

int main() {
    int n1;
    int n2;
    
    printf("Digite o primeiro valor:");
    scanf("%d", &n1);
    
    printf("Digite o segundo valor:");
    scanf("%d", &n2);

  if (n1 > n2) {
      printf("Valor mais alto: %d\n", n1);
      printf("Valor mais baixo: %d", n2);
  }
  
  if (n1 < n2) {
      printf("Valor mais alto: %d\n", n2);
      printf("Valor mais baixo: %d", n1);
  }
  
  if (n1 == n2) {
      printf("Os valores são iguais.");
  }
  
    return 0;
}