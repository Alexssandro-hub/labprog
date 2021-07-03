#include <stdio.h>
#include <stdlib.h>
#define TAM 1
//Escreva um programa que leia um vetor do usu ́ario e imprima seus valores e seus endere ̧cos. Teste o vetor com tipos de dados diferentes, analise os endere ̧cos.
int main () {

int *v[TAM], x, i;
  
  *v[0]=x;
  
  for(i=0; i<TAM; i++){
    puts("Favor, digite um numero: \n");
    scanf("%d", &x);

    printf("Valor em inteiro: %d\n", x);
    printf("Valor do seu endereço: %p\n", &x);
   
    //Interpretação final: Mesmo que a variável seja o mesmo valor como int x=2 ou char x=2 o endereço na memória difere
  }
  return 0;
}