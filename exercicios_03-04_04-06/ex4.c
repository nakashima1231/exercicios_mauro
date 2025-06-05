#include <stdio.h>
#include <string.h>

int main() {
    FILE *pArquivo = NULL;
    char data[11] = " ";
    char hora[6] = " ";
    pArquivo = fopen("remedios.txt", "w");

    do {
        printf("Digite a data (XX/XX/XXXX) (F para parar): ");
        scanf("%10s", data);
        if(strcmp(data, "F") == 0) {
            break;
        }
        printf("Digite a hora (XX:XX) (F para parar): ");
        scanf("%5s", hora);
        
        fprintf(pArquivo, "Data: %s Hora: %s\n", data, hora);
    } while(strcmp(data, "F") != 0 || strcmp(hora, "F") != 0);

    fclose(pArquivo);
    return 0;
}