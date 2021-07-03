#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
#define MX 7

int main(){

  unsigned int x[TAM], y[TAM],M[TAM][TAM], r, i;
  
  srand(time(NULL));

  for(r=0; r<TAM; r++){
    for(i=0; i<TAM; i++){
    if(r<=3){
     y[i]= x[i]=rand()%MX;
    } else if(r>0 && r>3 && r<=5){
      x[i]=rand()%MX;
      x[i]=x[i]-1;
      y[i]=x[i];
    //y[i]=rand()%MX;
    } else if(r>0 && r>5 && r<=7){
      x[i]=rand()%MX;
      x[i]=x[i]+1;
      y[i]=x[i];
    } else if(r>0 && r>8 && r<=9){
      x[i]=rand()%MX;
      x[i]=x[i]-2;
      y[i]=x[i];
    } else if(r>0 && r>9 && r<=TAM){
      x[i]=rand()%MX;
      x[i]=x[i]+2;
      y[i]=x[i];
    }
    
   }
  }
  printf("\n");
  
  puts("SEQUÊNCIA DE X  E Y: \t\n");
  puts("Números da MATRIZ \t\n");
  
  for(i=0; i<TAM; i++){
    printf("\n\tVetor[%d] X:[%d] Y:[%d]\n\t", i, x[i], y[i]);
  }
  printf("\n");

  for(i=0; i<MX; i++){
    ++M[x[i]][y[i]];
  }
  for(i=0; i<MX; i++){
    printf("A frequência é Vetor[%d]: [%d][%d]\n", i, x[i], y[i]);
  }
  return 0;
}