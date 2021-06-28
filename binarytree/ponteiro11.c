#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
#define MX 7

int main(){

  int x[TAM], y[TAM],M[TAM][TAM], i;
  
  srand(time(NULL));

  for(i=0; i<TAM; i++){
    x[i]=rand()%MX;
    y[i]=rand()%MX;
    //printf("[%d - %d]", x[i], y[i]);
  }

  puts("SEQUÊNCIA DE X  E Y: \t\n");
  puts("Números da MATRIZ \t\n");
  for(i=0; i<TAM; i++){
    printf("\n\tVetor[%d] X:[%d] Y:[%d]\n\t", i, x[i], y[i]);
  }
  printf("\n");

  for(i=0; i<MX; i++){
    ++M[x[i]][y[i]];
  }
  for(i=0; i<MX; i++){
    printf("A frequência é [%d]: [%d][%d]\n", i, x[i], y[i]);
  }
  return 0;
}