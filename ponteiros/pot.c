#include <stdio.h>
#include <math.h>

int main () {

  int x, i, soma;

  for(i=0; i<=10; i++){
    x=pow(2,i);
    soma+=x;
    printf("%d\n", x); 
  }
  printf("\n");

  printf("Somatório é: %d\n", soma);
  return 0;
}