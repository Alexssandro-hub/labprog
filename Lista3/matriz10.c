#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#define TAM 3
int main () { 

  int k, i;
  int v[TAM][TAM];

  printf("Digitar os números de posição na matriz: \n");

  for(i=0; i<3; i++){
    for(k=0; k<3; k++){
    printf("ELEMENTO[%d][%d]: ", i,k);
    scanf("%d", &v[i][k]);
    
    }
  } 
  
  for(i=0; i<1; i++){
    for(k=0; k<1; k++){
      printf ("\nElemento[0][0] = %d\n", v[0][0]);
      printf ("\nElemento[1][1] = %d\n", v[1][1]);
      printf ("\nElemento[2][2] = %d\n", v[2][2]);
    }
  } 

  return 0;
}