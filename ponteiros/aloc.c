#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MX 100

int main () {

  int *p=NULL, k, qt=0, nqt=0;

  srand(time(NULL));

  do{
    puts("Digite a quantidade inicial de elementos: ");
    scanf("%d", &qt);
    p=(int*) realloc( p, qt * sizeof(int));

    //Preenchendo posições de vetores e alimentando-os.
    for(k=nqt; k<qt; k++){
      *(p+k)=rand()%MX;
    }
    for(k=0; k<qt; k++){
      printf("[%p] \t [%d] \n", p+k, *(p+k));
    }
    nqt = qt; 
  } while(qt);

  free(p);

  return 0;
}