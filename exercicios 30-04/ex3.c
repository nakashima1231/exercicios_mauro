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

/*
#include <stdio.h>

int main() {
    char senha[5] = "azimo";
    char senhadigitada[5] = {0};
    int tentativas = 3;
    int certo;

    do {
        printf("Digite sua senha: ");
        scanf("%4s", senhadigitada);

        certo = 1;
        
        for (int i = 0; i < 5; i++) {
            if (senha[i] != senhadigitada[i]) {
                certo = 0;
                break;
            }
        }

        if (certo == 0) {
            tentativas--;
            if (tentativas > 0) {
                printf("Senha errada. Tentativas restantes: %d\n", tentativas);
            }
        } else {
            printf("Seja bem vindo!\n");
            return 0;
        }
    } while (tentativas > 0);

    printf("Tente novamente mais tarde!\n");
    return 0;
}
*/