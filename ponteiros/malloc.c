#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define MX 10

int main (){

  unsigned int qt, k;
  int *p=NULL;

  srand(time(NULL));
  //Espaço na memória solicitado pelo usuário
  puts("Favor solicite a quantidade de inteiros: \n");
  scanf("%u", &qt);
  //Alocação dinâmica
  p = malloc(qt*sizeof(int));//sizeof portabilidade no código
  if(!p){
    puts("Sem memória!\n");
    exit(1);
  }
  //Gerar vetores com números pseudoaleatórios
  for (k=0; k<qt; k++){
		*(p+k)= rand()%MX; //Aritmetica de ponteiros
    //p[k] = rand() % MX;
	}
  //Saída
  for(k=0; k<qt; k++){
  printf("%d", *(p+k));
  }
  printf("\n");
  return 0;
}