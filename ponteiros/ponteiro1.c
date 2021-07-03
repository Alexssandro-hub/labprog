#include <stdio.h>
#include <stdlib.h>

int main () {

  int soma, num1=10, num2=20, *sum1;
  int *n1=&num1, *n2=&num2;

  soma = num1 + num2;
  sum1= &soma;//ponteiro sum1 aponto para o valor na memória do resultado soma

  printf("Valor da soma: %d\n", soma);
  printf("Valor alocado na memórida: %p", &soma);
  printf("\n");

  return 0;
}