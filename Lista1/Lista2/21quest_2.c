#include <stdio.h>
#include <stdlib.h>
int palindromos (int n){

int palindromo, b, c, d;
  c=n; d=0;

  if(n<10){
    palindromo=1;
  }else {
    while(c>10){
      b=c%10;
      c=c/10;
      d=(d+b)*10;
    } 
    d = d+c;
    if(d==n){
      palindromo=1;
    }else {
      palindromo=0;
    } 
} return (palindromo);
}

int main (){

  int  a, x; 

  while(x<=00000 || x>=99999){
      printf("\t\nPor favor digite um numero inteiro de 5 digitos: \n\t");
      scanf("%d", &x);
  }
  a= palindromos(x);
  if(a==1){
    printf("O número é palindromo!");
  } else if (a==0){
    printf("O número não é palindromo!");
  }


return 0;
}





