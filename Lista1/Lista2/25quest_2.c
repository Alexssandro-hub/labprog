#include <stdio.h>
#include <math.h>

int main () {

  double pi=3.14,i,result;

 
  for (i=0; i<100; i++) {
  result = pi/4;  
  result = 4-(pow(-1,i)/(2*i)+1); //Somatório de Leibniz
  if(result>3){
  printf("Valor de PI: %.6f\n", result);
  }
  }
  return 0;
}