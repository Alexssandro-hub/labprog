#include <stdio.h>
#include <math.h>

int main () {

int A, B, number1, i; 

printf("Favor, digite um numero do extremo A para um intervalo: \n");
scanf("%d", &A);  

printf("Favor, digite um numero do extremo B para um intervalo: \n");
scanf("%d", &B);


if (A>B){
    while(A>B){
      A-=4;
      number1 = pow (A,2);
      printf("%d",number1);
      number1--;
     
    }
} else if (B>A) {

}


  return 0;
}