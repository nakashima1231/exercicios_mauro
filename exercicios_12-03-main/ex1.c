#include <stdio.h>

int main() {
    int idade;
    
    printf("Qual a idade do paciente: ");
    scanf("%d", &idade);
    
    printf( (idade >= 60) ? "Pode ser atendido." : "Não pode ser atendido." );

    return 0;
}