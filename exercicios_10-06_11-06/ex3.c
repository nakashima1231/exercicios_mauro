#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() { 
  char *recebido = getenv("QUERY_STRING");
  printf( "Content-type: text/html\n\n" );

//x=2 -> 2
  char *pos_igual = strchr(recebido, '=');
  pos_igual = pos_igual + 1;

  int numero = atoi(pos_igual);

  printf("Recebido: %d\n", 2025 - numero);

  return 0;
}
