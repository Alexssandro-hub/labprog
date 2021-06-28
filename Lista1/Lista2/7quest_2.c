#include <stdio.h>
#include <stdlib.h>

int main () {

float x,y,divisao;

do {
  
    printf("Favor, digitar um numero: \n");
    scanf("%f", &x);

    printf("Favor, digitar outro numero: \n");
    scanf("%f", &y);

    divisao = x/y;
  
    printf("A divisão é : %.2f\n", divisao);

  if (y==0){
    
    printf("Por favor para o segundo valor digitar numero maior que zero! \n");
    
    printf("Favor, digitar um numero: \n");
    scanf("%f", &x);

    printf("Favor, digitar outro numero: \n");
    scanf("%f", &y);

    divisao = x/y;

    printf("A divisão é : %.2f\n", divisao);
  
      } else {
        divisao = x/y;
  
        printf("A divisão é : %.2f\n", divisao);
        printf("Fim do programa!\n");
      }
    } while(y==0);
  return 0;
}