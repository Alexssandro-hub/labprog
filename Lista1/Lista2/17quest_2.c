#include <stdio.h>

int main () { 
 // Elaborar um programa que apresente os valores de convers ̃ao de graus Celsius em graus Fahrenheit,de 10 em 10 graus, iniciando a contagem em dez graus Celsius e finalizando em cem graus Celsius. O
 // programa deve apresentar os valores das duas temperaturas. Obs.: Pesquise a f ́ormula de convers ̃ao.

  float celsius, fahrenheit, i;

  celsius =10;
  printf("\t\nTemperatura em Celsius no momento atual: %.2f ºC\n\t", celsius);
  
  printf("\n\tConversão de temperaturas na variação de 10 a 100 graus celsius\n\t");
  
  for (celsius=10 ; celsius<=100; celsius+=10) {
  fahrenheit = ((9 * celsius + 160) / 5);
  printf("\n\tTemperatura em Fahrenheit: %.2f ºF\n\t", fahrenheit);

  celsius = ((fahrenheit - 32)/1.8);
  printf("\n\tTemperatura convertida em Celsius: %.2f ºC \n\t", celsius);
  }
  return 0;
}