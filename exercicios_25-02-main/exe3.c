#include <stdio.h>

int main() {
    float nota;
    
    printf("Digite uma nota [0-10]:");
    scanf("%f", &nota);
    
    if ( nota >= 9) {
        printf("A");
        return 0;
    }
    
    if (nota >= 8) {
        printf("B");
        return 0;
    }
    
    if (nota >= 7) {
        printf("C");
        return 0;
    }
    
    if (nota >= 6) {
        printf("D");
        return 0;
    }
    
    if (nota < 6) {
        printf("F");
        return 0;
    }
    
    return 0;
}