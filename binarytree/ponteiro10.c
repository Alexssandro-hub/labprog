#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
#define MX 7

int main() {

  int x[TAM]={0}, f[MX]={0}, i;

  srand(time(NULL));

  for(i=0; i<TAM; i++){
    x[i]=rand()%MX;
  }

  puts("SEQUÊNCIA DE X \t\n");
  for(i=0; i<TAM; i++){
    printf("%d \n", x[i]);
  }
  for(i=0; i<MX; i++){
    ++f[x[i]];
  }
  for(i=0;i<MX; i++){
  printf("\nA frequência de cada elemento de X[%d] é: [%d]\n", i, f[i]);
  }
  return 0;
}