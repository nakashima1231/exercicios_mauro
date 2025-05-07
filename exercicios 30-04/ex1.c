#include <stdio.h>

int main() {
    char nome[8] = "Gabriel";

    printf("Nome: ");
    scanf("7%s", nome);

    for (int i = 0; i < 7; i ++) {
        printf(" * %c", nome[i]);
    }
    printf(" *\n");
    
    return 0;
}
