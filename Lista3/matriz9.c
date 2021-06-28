#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAM 100
#define MAX 100
int main () {

int v[TAM], intervalo, t, k, j;

printf("Por favor, defina o tamanho do intervalo:\n");
scanf("%d", &intervalo);
//Gerando vetores pseudoaleatórios
for(k=0; k<intervalo; k++){
  v[k]=rand()%MAX;
}
for(k=0; k<intervalo; k++){
  printf("\tValores pseudoaleatórios: %d\n", v[k]);
} printf("\n");
//Ordenação por seleção
for(k=0; k<intervalo-1; k++){
  for(j=k+1; j<intervalo; j++){
    if(v[j]<v[k]){
      t=v[k];
      v[k]=v[j];
      v[j]=t;
    }
  }
}
for(k=0; k<intervalo; k++){
  printf("\tValores ordenados por seleção: %d\n", v[k]);
} printf("\n");

return 0;
}