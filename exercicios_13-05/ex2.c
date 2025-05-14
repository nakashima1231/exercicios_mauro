#include <stdio.h>

int main() {
    int vetor[5] = {9, 7, 3, 6, 8};
    int maior;

        for(int x = 0; x < 5; x++) {
        printf("%d ", vetor[x]);
    }
    printf("\n");

    for(int y = 0; y < 5; y++) {
        for(int i = 0; i < 5; i++) {
            if( vetor[i] > vetor[i+1] ) {
                maior = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = maior;
            }
        } 
    }
    
    for(int x = 0; x < 5; x++) {
        printf("%d ", vetor[x]);
    }
    printf("\n");

    return 0;
}