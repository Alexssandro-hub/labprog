#include <stdio.h>

int main(){

  int celsius, fahrenheit;

  printf("Diga quantos graus está em sua cidade hoje?: \n");
  scanf("%d", &celsius);

  fahrenheit = ((9 * celsius + 160) / 5);
  
  printf("temperatura da sua cidade em Fahrenheit: %d\n", fahrenheit);
  return 0;
}