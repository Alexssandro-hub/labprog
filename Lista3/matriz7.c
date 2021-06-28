#include <stdio.h>
#include <string.h>

#define TAM 21
int main(){ 

  char str[TAM], c;
  int i, tam= strlen(str);

  printf("Favor digitar uma palavra: \n");
  fgets(str, TAM, stdin);

  for(i=0; i<tam/2; i++){
    c = str[i];
    str[i]=str[tam-1-i];
    str[tam-1-i]= c;
  }
  printf("String inversa: %s\n", str);

  return 0;
}