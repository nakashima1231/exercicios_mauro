#include <stdio.h>

int main() {
    char nome[7] = "Gabriel";

    printf("Nome: %s\n", nome);

    for (int i = 0; i < 7; i ++) {
        printf(" * %c", nome[i]);
    }
    
    return 0;
}