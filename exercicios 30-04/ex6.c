#include <stdio.h>
#include <string.h>

int main(){
    char nome[20];
    char sobrenome[20];

    printf("Digite seu nome: \n");
    scanf("%s", nome);

    strcat(nome, " ");    

    printf("Digite seu sobrenome: \n");
    scanf("%s", sobrenome);

    strcat(nome, sobrenome);
    printf("Nome completo: %s\n", nome);

    return 0;
}