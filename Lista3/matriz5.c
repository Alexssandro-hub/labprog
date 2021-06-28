#include <stdio.h>
#include <string.h>
#define TAM 21

int main() {

  char s1[TAM], s2[TAM]; 
  int resultado;

  printf("Favor, digitar alguma palavra: \n");
  fgets(s1, TAM, stdin);

  printf("Favor, digitar outra palavra: \n");
  fgets(s2, TAM, stdin);

  resultado = strcmp(s1, s2);

  if (resultado>0){
    printf("s1 é maior!\n\t");
  } else if (resultado<0){
    printf("s2 é maior!\n\t");
  } else {
    printf("As duas palavras são iguais!");
  }
  //Resultado em Hexa :D
  printf("\n\tResultado é: 0x%x\n", resultado);

  return 0;
}