#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MN 82
#define MX 237
int main() {

  int *p=NULL, k, soma, qtd;
  //Entrada de dados
  puts("Por favor, digite a quantidade de elementos que deseja alocar na memória: ");
  scanf("%d", &qtd);
  
  srand(time(NULL));
  p = (int*)malloc(qtd* sizeof(int));//Alocação dinâmica

  //Processo
  for(k=0; k<qtd; k++){
    *(p+k)=rand()%MX; //Gera vetores pseudo-aleatórios  
    if(*(p+k)>MN && *(p+k)<MX)
    printf("%d ", *(p+k));
  }
  printf("\n");

  for(k=0; k<qtd; k++){
    if(*(p+k)>MN && *(p+k)<MX){
    soma= *(p+k) + *(p+k+1);
    printf("Soma: [%d]\n", soma++);
    }
  }
 free(p);

 return 0;
}