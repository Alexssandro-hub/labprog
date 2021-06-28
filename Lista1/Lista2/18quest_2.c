#include <stdio.h>
#include <math.h>
// Histório da criação do Xadrez do livro: O Homem que Calculava!

int main () {

  unsigned long int grao, i=0;

  printf("\t\nCálculo de grãos de trigo em um tabuleiro de Xadrez!\t\n");

  for (i=0; i<=64; i++){
    
    grao = pow(2,i);
    printf("\t\nEste quadradro contém: %li grãos de trigo\n\t", grao);

  }
  return 0;
}