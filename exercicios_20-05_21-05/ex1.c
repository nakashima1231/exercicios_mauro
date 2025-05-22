#include <stdio.h>
#include <math.h>

float calcular_tempo_queda(float altura) {
    return sqrt(altura * 2 / 9.81);

}

float calcular_distancia_liberacao(float velocidade, float altura) {
    return velocidade * altura;

}

int main() {
    float altura, velo;
    
    printf("Digite a altura do avião: ");
    scanf("%f", &altura);

    printf("Digite a velocidade do avião: ");
    scanf("%f", &velo);
    altura = calcular_tempo_queda(altura);
    velo = calcular_distancia_liberacao(velo,altura);

    printf("Distância do alvo: %.2f\n", velo);
    printf("Tempo de queda: %.2f\n", altura);

    return 0;
}