#include <stdio.h>
#include <math.h>

int main () {

  int x,n, result, potencia1, potencia2;

  printf("Favor, digite um número(base): \n");
  scanf("%d", &x);

  printf("Favor, digite um segundo número(base): \n");
  scanf("%d", &n);
  
  potencia1 = x*x;
  potencia2 = n*n;
 
  printf("A primeira potência é: %d\n", potencia1);
  printf("A segunda potência é: %d\n", potencia2);

  result = potencia1 && potencia2;

  printf("Resultado do produto das potências é: %d\n", result);

  return 0;
}