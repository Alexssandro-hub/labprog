#include <stdio.h>

int main () {


  int number1;

  printf("Favor digitar um número: \n");
  scanf("%d", &number1);


  number1 % 2==0 ? printf("o numero %d e par", number1) : printf("o numero %d e impar", number1);


  return 0;
}