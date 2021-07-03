#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 20
//Escreva um programa que concatene duas strings utilizando ponteiros.
int main (){

  char str[TAM], *p;
  char ch[TAM], *q;

  p = str;
  q = ch;

  puts("Favor digitar uma palavra: \n");
  scanf("%s", p);

  puts("Favor digitar outra palavra: \n");
  scanf("%s", q);

  strncat(p, q, TAM);
  printf("Palavras Concatenadas: %s", p);

  return 0;
}