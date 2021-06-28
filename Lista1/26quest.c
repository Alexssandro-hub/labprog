#include <stdio.h>
#include <math.h>

int main () {

int x1, x2, Y1, Y2; 

float distancia;

printf("Favor, digitar o valor da coordenada x': \n");
scanf("%d", &x1);

printf("Favor, digitar o valor da coordenada x'': \n");
scanf("%d", &x2);

printf("Favor, digitar o valor da coordenada y': \n");
scanf("%d", &Y1);

printf("Favor, digitar o valor da coordenada y'': \n");
scanf("%d", &Y2);

distancia= sqrt( pow(x2-x1,2) + pow(Y2-Y1,2) );

printf("A distância de um ponto ao outro é: %.2f\n", distancia);

  return 0;
}