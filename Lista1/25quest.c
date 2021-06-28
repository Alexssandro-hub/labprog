#include <stdio.h>

int main () {

  float seg, min, hora;

  printf("Favor, digite a quantidade de segundos: \n"); 
  scanf("%f", &seg);

  min = seg / 60;
  hora = seg / 3600;

  printf("A quantida de segundos convertido em minutos é: %.2f\n", min);
  printf("A quantida de segundos convertido em hora é: %.2f\n", hora);

  return 0;
}