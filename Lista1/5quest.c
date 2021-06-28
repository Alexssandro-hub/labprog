#include <stdio.h>


int main () {

  int contRest;
  int taxa;

  scanf("%d", &contRest);
  taxa = (contRest * 0.1);
  printf("A conta a ser paga será: %d", contRest+taxa);


  return 0;
}