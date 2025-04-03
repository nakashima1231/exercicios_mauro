#include <stdio.h>

int main() {
    char pedido;

    printf("Digite o pedido (F para sair):  ");
    scanf("%c", &pedido);
    getchar();
    
    int quantidadeB = 0;
    int quantidadeH = 0 ;
    int quantidadeS = 0 ;
    int quantidadeC = 0 ;
    
    int total = 0;
    int quantidade = 0;
    
    while (pedido != 'F') {
        switch (pedido) {
            case 'B':  
                quantidadeB++;
                total += 10;
                quantidade += 1;
                break;
            case 'H':  
                quantidadeH++;
                total += 15;
                quantidade += 1;
                break;
            case 'S':  
                quantidadeS++;
                total += 9;
                quantidade += 1;
                break;
            case 'C':  
                quantidadeC++;
                total += 30;
                quantidade += 1;
                break;
            default:
                printf("Não foi encontrado no cardápio!");
                break;
        }
        
        printf("Digite o pedido (F para sair):  ");
        scanf("%c", &pedido);
        getchar();
    }
    printf("Suco:           %d vendido(s)\n", quantidadeS);
    printf("Batata:         %d vendido(s)\n", quantidadeB);
    printf("Hambúrguer:     %d vendido(s)\n", quantidadeH);
    printf("Combo:          %d vendido(s)\n", quantidadeC);
    printf("Total:          %d item(ns)\n", quantidade);
    printf("Valor total: R$ %d", total);
    
    return 0;
}
