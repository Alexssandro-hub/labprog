#include <stdio.h>

int main() {

  float raio, diametro, pi=3.14, circunferencia, area;

  printf("Favor, informar o raio do círculo: \n");
  scanf("%f", &raio);

  diametro= 2*raio;
  circunferencia= 2*pi*raio;
  area= pi*(raio*raio);

  printf("O valor do diametro do círculo é: %.2f\n", diametro);
  printf("O valor da cincunferência do círculo é: %.2f\n", circunferencia);
  printf("O valor da área do círculo é: %.2f\n", area);

  return 0;
}