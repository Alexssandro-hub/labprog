#include <stdio.h>

int main (){


  int number1, number2, x;
  
  printf("Favor, digitar um numero: \n");
  scanf("%d", &number1);
  printf("Favor, digitar segundo numero:\n");
  scanf("%d", &number2);
  
  x = number1/number2;

  number1 % x == number2 ? printf(" o pimeiro numero é multiplo do segundo!%d\n", number1) : printf(" O primeiro numero não é multiplo do segundo!%d\n", number2);

  return 0;
}