#include <stdio.h>

int main() {
    int numero;
    int ntotal = 0;

    printf("Digite o número: ");
    scanf("%d", &numero);

    for(int i = 1; i <= numero; i++) {

        if(i % 3 == 0 || i % 5 == 0) {
            ntotal += i;
        }
    }

    printf("Total: %d\n", ntotal);
    
    return 0;
}