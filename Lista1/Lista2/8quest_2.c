#include <stdio.h>

int main() {

  float mercadoria, entrada;
  int parcela1, parcela2, somaparcela;

  printf("Por favor inserir o valor da mercadoria: \n");
  scanf("%f", &mercadoria);

  parcela1 = mercadoria/3;
  printf("A primeira prestação equivale a: %d\n", parcela1);
  parcela2 = mercadoria/3;
  printf("A segunda prestação equivale a: %d\n", parcela2);
  
  somaparcela = parcela1+parcela2;
  printf("A soma das parcelas é: %d\n", somaparcela);

  entrada = mercadoria - somaparcela;
  printf("O valor da entrada é: %.2f\n", entrada);
  return 0;
}