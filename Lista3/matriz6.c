#include <stdio.h>
#include <string.h>
#define TAM 21
int main () { 

  char ch1[TAM], ch2[TAM];
  
  printf("Favor digitar uma palavra: \n");
  fgets(ch1, TAM, stdin);

  printf("Favor digitar outra palavra: \n");
  fgets(ch2, TAM, stdin);

  strcat(ch1,ch2);

  printf("Palavra Concatenada= %s", ch1);

  return 0;
}