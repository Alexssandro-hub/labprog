#include <stdio.h>

int main (){

float number1, mult, div, soma, sub,i;

printf("\n\tFavor, digitar um número para ser apresentado sua respectiva tabuada!\n\t");
scanf("%f", &number1);

for (i=1; i<10; i++){
  
  printf("\n\tTABUADA DO NÚMERO DIGITADO!\t\n");
  mult= number1 * i;
  printf("A multiplicação do numero digitado é: %.2f\n",mult);
  div = number1 / i;
  printf("A divisão do numero digitado é: %.2f\n",div);
  soma = number1 + i;
  printf("A soma do numero digitado é: %.2f\n",soma);
  sub = number1 -i;
  printf("A divisão do numero digitado é: %.2f\n",sub);
}

  return 0;
}