#include <stdio.h>

int main() {
    char senha[5] = "azimo";
    char senhadigitada[5];
    int tentativas =3;
    int certo = 1;

    do {
        printf("Digite sua senha: ");
        scanf("%5s", senhadigitada);
        tentativas--;
        for(int i = 0; i < 5; i++) {
            if(senha[i] == senhadigitada[i]) {
                certo = 1;
                continue;
            } else {
                printf("Senha errada. Tentativas restantes: %d \n", tentativas);
                certo = 0;
                break;
            }
        }
    } while(tentativas >  0 && certo == 0);

    if(certo == 1) {
        printf("Seja bem vindo!\n");
    } else {
        printf("Tente novamente mais tarde!\n");
    }
    return 0; 
}
