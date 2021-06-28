#include <stdio.h>
#include <stdlib.h>

int main () {
  unsigned int a,i;
  
  printf("Numero correspondido em binario, octal e hexadecima: \n\t");

  for (i=1; i<257; i++){
    a=i;
    
    printf("\n\n %o\n", a);
    printf("\n\n %s\n", a);
    printf("\n\n %X\n\n\n", a);

  }


  return 0;
}