#include <stdio.h>

int main (){

  int number, result1, result2;

  scanf("%d", &number);
  printf("Digite um número: %d\n", number);

  result1= number+1;
  printf("Número sucessor: %d\n", result1);

  result2= number-1;
  printf("Número antecessor: %d\n", result2);
  return 0;
}