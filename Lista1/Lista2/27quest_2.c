#include <stdio.h>
//Escreva um programa que receba v ́arios n ́umeros inteiros (em uma estrutura de la ̧co) e apresente oproduto do maior pelo menor n ́umero apresentado. (Obs.: N ̃ao utilize vetores.) A condi ̧c ̃ao de sa ́ıda do la ̧co  ́e o usu ́ario digitar um n ́umero negativo e par.
int main () {

  int number, mult, i;

  do {
    printf("Favor, digite um numero inteiro: \n");
    scanf("%d", &number);
    getchar(); 
    
    for(i=1; i<20; i++){
      printf("Favor, digite um numero inteiro: \n");
      scanf("%d", &number);
      getchar(); 
      if(number>0){
      mult = number * i;
      printf("Resultado do produto: %d\n", mult);
      }else if (number<0){
      printf("Fim do programa!\n");
      break;
      }
    }

  }while(number!=(signed)number);
  return 0;
}

