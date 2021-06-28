#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define TAM 3
#define MAX 19

int main (){

  int i, k;
  float v[TAM], mediaA, mediaG;
  
  for (k=0; k<3; k++){
    v[k]=rand()%MAX;
    printf("%.2f ", v[k]);
  }

  printf("\n====== MÉDIA ARITMÉTICA ======\n");
  mediaA = (v[0]+v[1]+v[2])/3;
  printf("\n Média Aritmética é: %.2f\n", mediaA);

  printf("\n====== MÉDIA GEOMÉTRICA ======\n");
  mediaG=pow((v[0]*v[1]*v[2]),1/3);
  printf("\n Média Geométrica é: %.2f\n", mediaG);
  return 0;
}