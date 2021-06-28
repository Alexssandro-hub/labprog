#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MX 200
int main(){

  int i, j, num, *p=NULL;
  
  //Entrada de dados
  puts(" Favor, digite um número responsável pela quantidade de números de colunas e linhas de uma matriz: ");
  scanf("%d", &num);

  srand(time(NULL));
  p= malloc(num*sizeof(int*));//Aloca na memória(num*4bytes)

  //Processo
  for(i=0; i<num; i++){  
    for(j=0; j<num; j++){
      
      *(p+i)=rand()%MX;//Gerando vetores aleatórios 
      
      if(p[i]<=MX)//p[i]=*(p+i)
      printf("vetor gerado V[%p][%d]: \n", p+i, p[i]);

    }
  }
  printf("\n");
  
  //Saída do Algoritmo 
  for(i=0; i<num; i++){
      printf("Vetor linha: [%d]\n", p[i]);
  }
  free(p);//Libera a alocação dinâmica na memória
  return 0;
}