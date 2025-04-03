#include <stdio.h>

int main() {
    float raio;
    float diametro;
    float circun;
    float area;
    float pi = 3.14;
    
        printf("Digite o valor do raio: ");
        scanf("%f", &raio);
    
        diametro = raio * 2;
        circun = 2 * pi * raio;
        area = pi * raio * raio;
    
        printf("O valor do diamêtro: %f\n", diametro);
        printf("O valor da circunferência: %f\n", circun);
        printf("O valor da area: %f\n", area);

    return 0;
}
