#include <stdio.h>

int main (){

  int comprimento, altura, largura, volume;

  scanf("%d", &comprimento);
  printf ("Digite o valor do comprimento: %d\n", comprimento);
  
  scanf("%d", &largura);
  printf("Digite o valor da largura: %d\n", largura);
  
  scanf("%d", &altura);
  printf("Digite o valor da altura: %d\n", altura);

  volume = comprimento*largura*altura;

  printf("O volume da caixa é: %d\n", volume);

  return 0;
}