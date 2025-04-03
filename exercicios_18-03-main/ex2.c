#include <stdio.h>

int main() {
    int contador;
    float nota = 0;
    float media = 0;
    int median = 0;
    
    printf("Digite um número (-5 para encerrar): ");
    scanf("%d", &contador);
    
    while (contador != -5) {
        nota += contador;
        printf("Digite um número (-5 para encerrar): ");
        scanf("%d", &contador);
        
        median += 1;
    }
    
    media = nota / median;
    printf("%f\n", nota);
    printf("Sua média é: %f", media);
    
    return 0;
}
