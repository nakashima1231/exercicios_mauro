#include <stdio.h>
#include "util.h"

int main() {
    double raio, dia, area, circun;
    
    printf("Digite o valor do raio: ");
    scanf("%lf", &raio);
    
    dia = diametro(raio);
    printf("Diametro: %f\n", dia);
    
    
    circun = (raio);
    printf("Circunferencia: %f\n", circun);
    
    area = (raio);
    printf("Area: %f\n", area);
    

    return 0;
}