#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MX 200
int main(){

  int i, j, num, *p=NULL;
  
  //Entrada de dados
  puts("Favor, digite um número responsável pela quantidade de números de colunas e linhas de uma matriz: ");
  scanf("%d", &num);

  p=(int*) malloc(num*sizeof(int));
  int mat[num][num]; //Cria matriz NxN
  srand(time(NULL));
  
  //Processo
  for(i=0; i<num; i++){
    for(j=0; j<num; j++){
    mat[i][j]=rand()%MX;//Gerando vetores aleatórios
    
    if(mat[i][j]<=MX)
    printf("vetor gerado V[%d]: \n", mat[i][j]); 
    }
  }
  printf("\n");
  //Saída do Algoritmo 
  for(j=0; j<num; j++){
     printf("Diagonal principal: [%d] \n",  mat[j][j] );
  }
  free(p);//Libera a alocação dinâmica na memória
  return 0;
}