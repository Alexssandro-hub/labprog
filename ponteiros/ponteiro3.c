#include <stdio.h>
#include <stdlib.h>
#define TAM 10
//Escreva um programa que solicite iterativamente um n ́umero do usu ́ario e imprima sempre o menor valor fornecido. Crie um crit ́erio para finalizacao do programa.
int main() {
  int *p= NULL, x, i;
  int maior=0, menor=0, soma=0;
  
  p=&x;
  for(i=0; i<TAM; i++){
    puts("Por favor, digite um numero: ");
    scanf("%d", p);

    soma = soma + *p;
    if(*p<maior){
      maior = *p;
    } else if (*p < menor && *p!=0){
      menor = *p;
      printf("FIM DO PROGRAMA!");

    printf("O menor valor %d", *p);
    }
  }

  return 0;
}