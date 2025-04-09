#include <stdio.h>

int main() {
    int n1, n2, n3, n4;
    
    do {
        printf("linha 1: ");
        scanf("%d", &n1);
    } while(n1 < 0 || n1 > 10);
    
    do {
        printf("linha 2: ");
        scanf("%d", &n2);
    } while(n2 < 0 || n2 > 10);
    
    do {
        printf("linha 3: ");
        scanf("%d", &n3);
    } while(n3 < 0 || n3 > 10);
    
    do {
        printf("linha 4: ");
        scanf("%d", &n4);
    } while(n4 < 0 || n4 > 10);

    
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
