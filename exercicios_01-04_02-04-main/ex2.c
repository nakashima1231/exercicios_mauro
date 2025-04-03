#include <stdio.h>

int main() {
    int ponto = 0;
    int n = 0;
    
    do {
        printf("Digite um número: ");
        scanf("%d", &ponto);
        
        if (ponto % 2 == 0) {
            n += ponto;
        } else {
            break;
        }
        
        
    } while (ponto % 2 == 0);
    printf("A soma de todos os valores pares são: %d", n);

    return 0;   
}