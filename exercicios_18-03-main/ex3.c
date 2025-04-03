#include <stdio.h>

int main() {
    int resp;
    int a, b, c;
    int hipo, cat;

    printf("digite o valor de a [-1 para sair]: ");
    scanf("%d", &resp);

    while (resp != -1) {
        a = resp;
        
        printf("digite o valor b: ");
        scanf("%d", &b);
        printf("digite o valor c: ");
        scanf("%d", &c);

        if (a + b > c) {
            if (b + c > a) {
                if (a + c > b) {
                    
                    if (a > b) {
                        if (a > c) {
                            hipo = a * a;
                            cat = b * b + c * c;
                            if (hipo == cat) {
                                printf("é possivel formar um triangulo retangulo\n");
                            } else {
                                printf("nao é possivel formar um triangulo retangulo\n");
                            }
                        }
                    }
                    if (b > a) {
                        if (b > c) {
                            hipo = b * b;
                            cat = a * a + c * c;
                            if (hipo == cat) {
                                printf("é possivel formar um triangulo retangulo\n");
                            } else {
                                printf("nao é possivel formar um triangulo retangulo\n");
                            }
                        }
                    }
                    if (c > a) {
                        if (c > b) {
                            hipo = c * c;
                            cat = a * a + b * b;
                            if (hipo == cat) {
                                printf("é possivel formar um triangulo retangulo\n");
                            } else {
                                printf("nao é possivel formar um triangulo retangulo\n");
                            }
                        }
                    }
                } else {
                    printf("nao é possivel formar um triangulo\n");
                }
            } else {
                printf("nao é possivel formar um triangulo\n");
            }
        } else {
            printf("nao é possivel formar um triangulo\n");
        }
        
        printf("digite o valor de a [-1 para sair]: ");
        scanf(" %d", &resp);
    }

    return 0;
}
