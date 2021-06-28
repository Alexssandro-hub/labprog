#include <stdio.h>
#define TAM 15

int main () {

  int v[TAM], soma, i, j;

  for(i=0; i<TAM; i++){
    printf("Favor, digitar um número: \n");
    scanf("%d", &v[i]);
  }

  for(j=0; j<TAM; j++){
    soma +=v[j];
  }

  printf("O somatório dos numéros são: %d\n\t", soma);

  return 0;
}