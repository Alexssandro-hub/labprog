#include <stdio.h>
#include <math.h>

int main () {

  //Elaborar um programa que apresente os resultados das potˆencias do valor de base 3, elevado a um expoente que varie do valor 0 a 7.

  int base=3, i, result;

  for (i=0; i<8; i++) {

    result = pow(base, i);
    printf("\t\nResultado das potências são: %d\t\n", result);
  }

  return 0;
}