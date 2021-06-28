#include <stdio.h>

int main () {

  unsigned int i,n,f=1;

  printf("Favor, digitar um número: \n");
  scanf("%d", &n);

  printf("=================\n");

  for(i=1; i<=n;i++ ){
    f*=i;
  }
  printf("O valor do fatorial: %d\n", f);

  return 0;
}