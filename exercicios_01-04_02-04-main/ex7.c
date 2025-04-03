#include <stdio.h>

int main() {
    int n1, n2, n3, n4;
    
    printf("linha 1: ");
    scanf("%d", &n1);
    printf("linha 2: ");
    scanf("%d", &n2);
    printf("linha 3: ");
    scanf("%d", &n3);
    printf("linha 4: ");
    scanf("%d", &n4);
    
    for(int i = 1; n1 >= i; n1--) {
        printf("*");
    }
    printf("\n");
    
    for(int i = 1; n2 >= i; n2--) {
        printf("*");
    }
    printf("\n");
    
    for(int i = 1; n3 >= i; n3--) {
        printf("*");
    }
    printf("\n");
    
    for(int i = 1; n4 >= i; n4--) {
        printf("*");
    }
    printf("\n");
    return 0;   
}