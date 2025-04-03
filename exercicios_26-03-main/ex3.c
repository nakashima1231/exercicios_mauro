#include <stdio.h>

int main() {
    
    char teste;
    
    printf("O quer fazer? [L/E/S](F para sair): ");
    scanf("%c", &teste);
    getchar();
    
    while(teste != 'F') {
        switch(teste) {
        case 'L':
            puts("Roupa lavada!");
            ;
        case 'E':
            puts("Roupa enxaguada!");
            ;
        case 'S':
            puts("Roupa seca!");
        }
        
        printf("O quer fazer? (F para sair): ");
        scanf("%c", &teste);
        getchar();
    }
    
  return 0;
}
