#include <stdio.h>
#include <math.h>

int main (){

float x,y,z, mediaA, mediaG;

printf("Favor, digitar o 1º numero: \n");
scanf("%f",&x);
printf("Favor, digitar o 2º numero: \n");
scanf("%f",&y);
printf("Favor, digitar o 3º numero: \n");
scanf("%f",&z);

mediaA = (x + y + z)/3; 
printf("A média aritmética é: %.2f\n", mediaA);
mediaG = pow(x*y*z,1.0/4);
printf("A média geométrica é: %.2f\n", mediaG);
  return 0;
}