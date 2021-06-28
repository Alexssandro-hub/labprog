#include <stdio.h>

int main() {

  int number1, number2;
  float soma, subtracao, quociente, produto, mod;

  printf("Digite um numero: \n");
  scanf ("%d", &number1);

  printf("Digite outro numero: \n");
  scanf ("%d", &number2);

  soma = (number1 + number2);
  printf("A soma de ambos os numeros é: %.2f\n", soma);

  subtracao = (number1 - number2);
  printf("A diferença entre os numeros é: %.2f\n", subtracao);
  
  quociente = (number1/number2);
  printf("O quociente entre os numeros é: %.2f\n", quociente); 
  
  produto = (number1 * number2);
  printf("O produto entre ambos os numeros é: %.2f\n", produto);
  
  mod = (number1 % number2);
  printf("O numero 1 mod numero 2 é: %.2f\n", mod);


  return 0;
}