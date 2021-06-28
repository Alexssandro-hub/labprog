#include <stdio.h>

int main() {

float real, dolar, dolar_convert;

printf("Por favor digite a quantida de $ em reais: \n");
scanf("%f", &real);

dolar= 5.27;
printf("Cotação do dólar: %.2f\n", dolar);

printf("========================\n");

printf("por favor informe quanto deseja converter de real para dolar: \n");
scanf("%f", &real);

dolar_convert = (real/5.27);

printf("Seu valor convertido para cotação atual é: %.2f\n", dolar_convert);

  return 0;
}