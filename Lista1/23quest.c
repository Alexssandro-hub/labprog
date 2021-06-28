#include <stdio.h>

int main () {

  int a, dezena, centena, unidade;

  printf("Favor, digete um numero de 3 digitos: \n");
  scanf("%d", &a);

  centena = a/100;
  dezena = (a%100)/10;
  unidade= a%10; 

  printf("O numero de 3 digitos invertido é: %d %d %d\n", unidade, dezena,centena);
  return 0;
}