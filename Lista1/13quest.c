#include <stdio.h>

int main(){

int a,b,aux;

  printf("Digite o valor da variável 'a': \n");
  scanf("%d",&a);

  printf("Digite o valor da variável 'b': \n");
  scanf("%d",&b);

  aux =a;
  a=b;
  b=aux;
  printf("Esse é o novo valor de b: %d\n", b);
  printf("Esse é o novo valor de a: %d\n", a);
  
  return 0;
}