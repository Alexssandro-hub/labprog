#include <stdio.h>
#include <math.h>

int main(){

  float x;
  double potencia = 0;

  scanf("%f", &x);

  
  x = x * 3;
  printf("resultado do triplo de x: %f",x);

  potencia = pow(x,2); //elevando o valor de x ao quadrado
  printf("Valor de %.2lf ao quadrado %.2f \n",x,potencia);
  
  x = x/2;
  printf("resultado da divisão do x pelo seu meio: %f", x);


  return 0;
}