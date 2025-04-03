#include <stdio.h>

int main() {
    float imc;
    float peso;
    float altura;
    
    printf("Digite seu peso em KG (62.5): ");
    scanf("%f", &peso);
    printf("Digite sua altura em metros (1.73): ");
    scanf("%f", &altura);
    
    imc = peso / (altura * altura);
        
        if (imc < 18.5) {
            puts("Baixo peso");
        } else {
            if (imc <= 24.9) {
                puts("Intervalo normal");
            } else {
                if (imc < 30) {
                    puts("Sobrepeso");
                } else {
                    if (imc < 35) {
                        puts("Obesidade classe 1");
                    } else {
                        if (imc < 40) {
                            puts("Obesidade classe 2");
                        } else {
                            puts("Obesidade classe 3");
                        }
                    }
                }
            }
        }
    return 0;
}