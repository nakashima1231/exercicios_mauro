#include <stdio.h>

void inicio() {
    printf( "Content-type: text/html\n\n" );
    printf("<html>");
    printf("<head>");
    printf("<meta charset=\"UTF-8\">");
}

void meio() {
    printf("</head>");
    printf("<body>");
}

void fim() {
    printf("</body>");
    printf("</html>");
}

void aba(char *x) {
    printf("<title>%s</title>", x);
}

void titulo(char *y) {
    printf("<h1>%s</h1>", y);
}

int main() {

    inicio();
    meio();
    aba("Segunda página");
    titulo("Usando argumentos");
    fim();

    return 0;
}