#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 101
//Escreva um programa que encontre o tamanho de uma string fornecida.
int main(){

  char str[TAM], *p;
  int tamanho;

  p=str;
  puts("Digite alguma palavra: \n");
  scanf("%s", str);
  tamanho = strlen(p);

  printf("String: %s", str);
  printf("Tamanho da string: %d \n", tamanho);
  return 0;
}