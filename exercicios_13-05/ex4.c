#include <stdio.h>

//funçao pra criar o triangulo
void triangulo(int x) {
    for(int i = 1; i <= x; i++){
        for(int j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }

}

int main() {
    int numero;
    char letra;

    printf("Digite um número: ");
    scanf("%d", &numero);
    
    triangulo(numero);

    do {
        printf("Digite uma letra: ");
        scanf(" %c", &letra);

        if(letra == 'a') {
            for(int x = 1; x <= numero; x++) {
                for(int z = 0; z < numero - x; z++) {
                    printf(" ");
                }
                for(int y = 0; y < x; y++) {
                    printf("*");
                }
                printf("\n");
            }
        } else if(letra == 'd') {
            triangulo(numero);
        } else {
            printf("Letra inválida\n");
        }

    } while(letra != 'f');
    
    return 0;
}
