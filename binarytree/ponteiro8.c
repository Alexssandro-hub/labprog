#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 50
//Escreva um programa que busque um caractere fornecido em uma string utilizando ponteiros.
int main(){

  char palavra[TAM], *letra, ch;
  
  letra=palavra;

  puts("Digite uma palavra: ");
  scanf("%s",letra);
  puts("Digite o caractere para ser encontrado: ");
  scanf("%c", &ch);
  ch=getchar();
  letra=strchr(palavra, ch);
  printf("Caractere encontrado: %c\n", *letra);

  return 0;
}