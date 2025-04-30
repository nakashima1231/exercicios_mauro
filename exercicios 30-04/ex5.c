#include <stdio.h>
#include <string.h>

int main(){
    int tamanho = 0;
    char senha[8];

    printf("Digite sua senha: \n");
    scanf("%s", senha);

    tamanho = strlen(senha);

    if(tamanho >= 8) {
        printf("Senha conforme!\n");
    } else {
        printf("Erro na senha!\n");
    }

    return 0;
}