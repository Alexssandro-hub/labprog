#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 100
#define MX 10

int main(){
  int i, k, t, v[TAM]={0};
  int frequencia[TAM]={0};
    
  srand(time(NULL));
  //Cria vetor aleatório em um intervalo de [0,9]
  for(i=0;i<TAM;i++){ 
    v[i]=rand()%MX;
  }
    
  printf("\nSequência desordenada: \n\n"); 
    
  for(i=0; i<TAM; i++){
    printf("%4d",v[i]);//Imprime os vetores
  }
	printf("\n");
  //Ordenação por seleção 
  /*printf("\nSequência ordenada por seleção: \n\n");
  for(i=0; i<TAM-1; i++){
  for(k=i+1; k<TAM; k++){
    if(v[k]<v[i]){
      t=v[i];
      v[i]=v[k];
      v[k]=t;
    }
  }
} //Imprime os valores ordenados para melhorar a leitura da frequência dos números pseudoaleatórios
  for(k=0; k<TAM; k++){
  printf("%4d", v[k]);
  if((i+1)%10==0)
        printf("\n");
} printf("\n");*/

  for(i=0; i<TAM; i++){ //Somatório da frequencia(conta quantas vezes cada número aparece)
        ++frequencia[v[i]]; 
  }
  
  printf("\n\n");
  printf("%s%20s\n","valor","frequência"); //Imprime o valor e a respectiva frequência
    
  for(i=0;i<MX;i++){
        printf("%4d %20d\n",i,frequencia[i]);
  }

  return 0;
} 