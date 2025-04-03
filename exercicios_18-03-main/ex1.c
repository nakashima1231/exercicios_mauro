    #include <stdio.h>

    int main() {
        int contador = 1;
        int fim = 3;
        float nota;
        float media = 0;
        
        while(contador <= fim) {
            printf("Digite a %d nota: ", contador);
            scanf("%f", &nota);
            
            media += nota;
            contador++;
        }
        
        media /= fim;
        printf("sua média é: %.2f", media);
        
        return 0;
    }