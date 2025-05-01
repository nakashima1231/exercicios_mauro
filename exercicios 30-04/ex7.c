#include <stdio.h>
#include <string.h>

int main(){
    char senha[6] = "azimo";
    char senhadig[6];
    int tentativas = 3;
    int resultado = 0;

    do {
        tentativas--;
        printf("Digite sua senha: ");
        scanf("%5s", senhadig);

        resultado = strcmp(senha, senhadig);

        if(resultado ==0) {
            printf("Seja bem vindo!\n");
            break;
        } else {
            printf("Senha errada. Tentativas restantes: %d\n", tentativas);
        }

    }while(tentativas > 0 && resultado !=0);

    if(resultado !=0) {
        printf("Tente novamente mais tarde.\n");
    }
        
    return 0;
}
