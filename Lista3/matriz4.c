#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 11
int main(){

  char str[TAM];
  int valor= atoi(str);
  
  printf("Favor digitar uma palavra: \n");
  scanf("%11[^\n]", str);
  
  printf("\nTamanho da string: %d\n", valor);

  return 0;
}