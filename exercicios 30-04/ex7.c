// PRECISO ARRUMAR!!!!!!!!!!!!!!!!!!!!!



#include <stdio.h>
#include <string.h>

int main(){
    char senha[5] = "azimo";
    char senhadig[5];
    int tentativas = 3;
    int resultado = 0;

    do {
        tentativas--;
        printf("Digite sua senha: ");
        scanf("%s", senhadig);

        resultado = strcmp(senha, senhadig);

        if(resultado ==0) {
            printf("Seja bem vindo!\n");
            resultado = 0;
        } else {
            printf("%d\n", resultado);
            printf("%s\n", senha);
            printf("%s\n", senhadig);
            printf("Senha errada. Tentativas restantes: %d\n", tentativas);
        }

    }while(tentativas > 0);

    if(resultado !=0) {
        printf("Tente novamente mais tarde.\n");
    }
        
    

    return 0;
}