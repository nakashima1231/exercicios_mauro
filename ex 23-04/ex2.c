#include <stdio.h>
#define PI 3.14159

int main() {
float raio, area;

printf("Digite o valor do raio: ");
scanf("%f", &raio);

area = PI * raio * raio;

printf("O valor da área é: %f\n", area);

return 0;
}
