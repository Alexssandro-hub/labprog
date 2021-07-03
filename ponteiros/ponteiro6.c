#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 11
//Escreva um programa que copie uma string para outra usando ponteiros.
int main(){
  
  char str[TAM], *p;
  char ch[TAM], *q;

  p=str;
  q = p;

  puts("Favor, digitar uma palavra\n");
  scanf("%s", p);

  printf("String digitada copiada: %s", q);

  return 0;
}