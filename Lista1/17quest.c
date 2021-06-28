#include <stdio.h>
#include <math.h>

int main(){

  float valor, x;

  printf("Favor digitar um número: \n");
  scanf("%f", &valor);

  x = fabs(valor);

  printf("O valor do módulo do número escolhido é: %.2f\n",x);


  return 0;
}