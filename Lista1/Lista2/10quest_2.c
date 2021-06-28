#include <stdio.h>
#include <math.h>

//16,25,36,64,81;

int main () {

int number, aux,i=0;

for (i=0; i<1; i++) {
  number=4;
  aux = pow(number,2);
  printf("Potência do numero é: %d\n",aux);
  number=5;
  aux = pow(number,2);
  printf("Potência do numero é: %d\n",aux);
  number=6;
  aux = pow(number,2);
  printf("Potência do numero é: %d\n",aux);
  number=8;
  aux = pow(number,2);
  printf("Potência do numero é: %d\n",aux);
  number=9;
  aux = pow(number,2);
  printf("Potência do numero é: %d\n",aux);
}


  return 0;
}