#include <stdio.h>

int main() {
    int contador;
    int soma = 0;
    
    printf("Digite um número: ");
    scanf("%d", &contador);
    
    for(int i = 0; i <= contador; i++) {
        if(i % 2 != 0) {
            soma += i;
        }
    }
    
    printf("A soma total dos números impáres é: %d", soma);  
    
    return 0;
}