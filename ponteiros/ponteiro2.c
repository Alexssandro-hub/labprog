#include <stdio.h>
#include <stdlib.h>

int main(){

  int *p1=NULL, *p2=NULL, v1=1, v2=2;

  p1=&v1;
  p2=&v2;

  v1= *p2;
  v2= *p1;
  printf("valor 1: [%d], valor 2: [%d]\n", *p1, *p2);

  return 0;
}